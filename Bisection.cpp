#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x)
{
    return x * x * x - x - 2;
}

double bisection(double a, double b, double tol, int max_iter)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "Bisection method fails: f(a) and f(b) must have opposite signs." << endl;
        return NAN;
    }

    double c = a;
    int iter = 0;

    cout << "Iteration\t a\t\t b\t\t c\t\t f(c)" << endl;
    cout << fixed << setprecision(6);

    while ((b - a) >= tol && iter < max_iter)
    {
        c = (a + b) / 2;

        cout << iter << "\t\t" << a << "\t" << b << "\t" << c << "\t" << f(c) << endl;

        if (f(c) == 0.0)
        {
            break;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        iter++;
    }

    cout << "\nFinal approximation: " << c << endl;
    cout << "Number of iterations: " << iter << endl;

    return c;
}

int main()
{
    double a, b, tolerance;
    int max_iterations;

    cout << "Enter interval [a, b]: ";
    cin >> a >> b;

    cout << "Enter tolerance: ";
    cin >> tolerance;

    cout << "Enter maximum number of iterations: ";
    cin >> max_iterations;

    double root = bisection(a, b, tolerance, max_iterations);

    if (!isnan(root))
    {
        cout << "Approximate root: " << root << endl;
        cout << "f(root) = " << f(root) << endl;
    }

    return 0;
}