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
double f(double x, double y)
{
    return ((y - x) / (y + x));
}
int main()
{
    Limon();
    double x0 = 0.0, y0 = 1, h = .01, xf = 0.1;
    cout << "X" << "   " << "Y" << endl;
    double x = x0, y = y0;
    while (x + 1e-9 < xf)
    {
        y = y + h * f(x, y);
        x = x + h;
        cout << x << "   " << y << endl;
    }
    return 0;
}