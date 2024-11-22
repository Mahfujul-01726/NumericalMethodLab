#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return x * x * x - x - 1;
}

double false_position(double a, double b, double tol)
{
    if (f(a) * f(b) > 0)
    {
        cout << "False position method cannot guarantee a root within the given interval. " << endl;
        return -1;
    }

    double c;
    while (fabs(b - a) >= tol)
    {
        // Calculate the new approximation using false position formula
        c = a - (f(a) * (b - a)) / (f(b) - f(a));

        if (f(c) == 0.0)
            break;
        else if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main()
{
    double a, b, tol;
    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;
    cout << "Enter the tolerance: ";
    cin >> tol;

    double root = false_position(a, b, tol);

    if (root != -1)
    {
        cout << "The root is approximately: " << root << endl;
    }
    return 0;
}
