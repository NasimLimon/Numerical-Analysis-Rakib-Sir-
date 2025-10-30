#include <bits/stdc++.h>
using namespace std;
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
double f(double x) { return pow(x, 10) - 1; }
int main()
{
    Limon();
    double a = 0.5, b = 2, fa = f(a), fb = f(b), xr, xrold, ea = 1;
    int i = 0;
    while (ea > 1e-4 && i < 50)
    {
        xr = b - (fb * (a - b)) / (fa - fb);
        if (i > 0)
            ea = fabs((xr - xrold) / xr);
        if (f(a) * f(xr) < 0)
        {
            b = xr;
            fb = f(xr);
        }
        else
        {
            a = xr;
            fa = f(xr);
        }
        xrold = xr;
        i++;
    }
    cout << fixed << setprecision(10) << xr << endl;
}
