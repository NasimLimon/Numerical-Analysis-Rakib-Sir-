#include <bits/stdc++.h>
using namespace std;
#define Limon()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
double f(double x) { return pow(x, 5) - 3 * x + 5; }
double df(double x) { return 5 * pow(x, 4) - 3; }
int main()
{
    Limon();
    double x0 = -1, x1, ea = 1;
    while (ea > 1e-3)
    {
        x1 = x0 - (f(x0) / df(x0));
        ea = fabs((x1 - x0) / x1);
        x0 = x1;
    }
    cout << fixed << setprecision(6) << x1 << endl;
}
