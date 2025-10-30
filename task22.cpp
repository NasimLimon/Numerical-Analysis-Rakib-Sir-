#include <bits/stdc++.h>
using namespace std;
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
double f(double x) { return 4 * x * x + 3 * x - 3; }
double bisection()
{
    double a = 0, b = 1, fa = f(a), fb = f(b), xr, xrold, ea = 1;
    while (ea > 1e-4)
    {
        xr = (a + b) / 2;
        if (fa * f(xr) < 0)
            b = xr;
        else
            a = xr;
        ea = fabs((b - a) / (a + b));
    }
    return xr;
}
double falsepos()
{
    double a = 0, b = 1, fa = f(a), fb = f(b), xr, xrold, ea = 1;
    while (ea > 1e-4)
    {
        xr = b - (fb * (a - b)) / (fa - fb);
        if (f(a) * f(xr) < 0)
            b = xr, fb = f(xr);
        else
            a = xr, fa = f(xr);
        if (fabs(xr) > 1e-12)
            ea = fabs((xr - xrold) / xr);
        xrold = xr;
    }
    return xr;
}
int main()
{
    Limon();
    double xb = bisection();
    double xf = falsepos();
    cout << fixed << setprecision(10) << xb << " " << xf << endl;
}
