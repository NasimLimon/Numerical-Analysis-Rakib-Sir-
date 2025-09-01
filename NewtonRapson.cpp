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
float f(double x)
{
    return 4 * x * x + 3 * x - 3;
}
float df(double x)
{
    return 8 * x + 3;
}
void NewtonRapson(float a, float b)
{
    double fa = f(a);
    double fb = f(b);
    if (fa * fb >= 0)
    {
        cout << "NOT POSSIBLE" << endl;
        return;
    }
    float x = a;
    cout << "x   " << "f(x)   " << "f'(x)   " << "value" << endl;
    cout << fixed << setprecision(6);
    float xInitial = f(x);
    float xDifferentrial = df(x);
    float value = x - (xInitial / xDifferentrial);
    cout << x << "   " << xInitial << "   " << xDifferentrial << "   " << value << endl;

    while (x != value)
    {
        x = value;
        xInitial = f(x);
        xDifferentrial = df(x);
        value = x - (xInitial / xDifferentrial);
        cout << x << "   " << xInitial << "      " << xDifferentrial << "      " << value << endl;
    }
    cout << "ans:" << value << endl;
}
int main()
{
    Limon();
    float a, b;
    cin >> a >> b;
    NewtonRapson(a, b);
}