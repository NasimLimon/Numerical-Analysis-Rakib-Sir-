#include <bits/stdc++.h>
using namespace std;
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
double f(double x) { return log(3 * x) - 3; }
int main()
{
    Limon();
    double a = 6, b = 7, fa = f(a), fb = f(b), xr, fxr, xrold, ea = 1;
    int i = 0;
    while (ea > 1e-4)
    {
        xr = b - (fb * (a - b)) / (fa - fb);
        fxr = f(xr);
        if (i > 0)
            ea = fabs((xr - xrold) / xr);
        if (fa * fxr < 0)
        {
            b = xr;
            fb = fxr;
        }
        else
        {
            a = xr;
            fa = fxr;
        }
        xrold = xr;
        i++;
    }
    cout << fixed << setprecision(10) << xr << endl;
}
