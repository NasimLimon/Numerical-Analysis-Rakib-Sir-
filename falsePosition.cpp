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

using namespace std;
float f(float x)
{
    return (4 * x * x + 3 * x - 3);
}
int main()
{
    float a, b;
    cin >> a >> b;
    if (f(a) * f(b) >= 0)
    {
        cout << "NOT Possible" << endl;
        return 0;
    }
    cout << fixed << setprecision(6);

    cout << "iter  " << "a      " << "b      " << "fa           " << "c           " << "fc         " << "Error" << endl;
    float c;
    float tolerence = 1e-6;
    float error;
    int iter = 1;

    do
    {
        float fa = f(a);
        float fb = f(b);
        c = ((a * f(b)) - (b * f(a))) / (f(b) - f(a));

        float fc = f(c);
        error = (b - a);
        if (fabs(fc) < tolerence)
            break;

        cout << iter << "   " << a << "  " << b << "   " << fa << "    " << c << "    " << fc << "   " << error << endl;
        if (fc * fa < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        iter++;
    } while ((b - a) >= tolerence);
    cout << "ans: " << c << endl;
}