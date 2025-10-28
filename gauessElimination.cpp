//                                            IN THE NAME OF SUPREME & MERCIFUL GOD
//                                                Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    Limon();
    float a[10][10], x[10], ratio;
    int i, j, k, n;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {

            cin >> a[i][j];
        }
    }

    for (i = 1; i <= n - 1; i++)
    {
        if (a[i][i] == 0.0)
        {
            cout << " Error";
            exit(0);
        }
        for (j = i + 1; j <= n; j++)
        {
            ratio = a[j][i] / a[i][i];

            for (k = 1; k <= n + 1; k++)
            {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    x[n] = a[n][n + 1] / a[n][n];

    for (i = n - 1; i >= 1; i--)
    {
        x[i] = a[i][n + 1];
        for (j = i + 1; j <= n; j++)
        {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }

    cout << endl
         << "Sol " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return 0;
}