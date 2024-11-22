#include <iostream>
#ifndef MY_MATH_FUNCTIONS_H
#define MY_MATH_FUNCTIONS_H
#endif

#include <cmath>

using namespace std;

double f(double x)
{
    return 3 * x - cos(x) - 1;
}

double bisection(double a, double b, double tol)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "Bisection method cannot guarantee a root within the given interval." << endl;
        return -1;
    }

    double c;

    while ((b - a) >= tol)
    {

        c = (a + b) / 2;

        if (f(c) == 0.0)
            break;

        if (f(c) * f(a) < 0)
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

    cout << "Enter the tolerance (e.g., 0.0001): ";
    cin >> tol;

    double root = bisection(a, b, tol);

    if (root != -1)
    {
        cout << "The root is approximately: " << root << endl;
    }

    return 0;
}
