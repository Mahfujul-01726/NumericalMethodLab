#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    // Define your function here. Replace with your actual function.
    return x * x * x - x - 1;
}

double falsePosition(double a, double b, double tol, int maxIter)
{
    double c;
    for (int i = 0; i < maxIter; i++)
    {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        if (fabs(func(c)) < tol)
        {
            cout << "Root found at x = " << c << " after " << i + 1 << " iterations." << endl;
            return c;
        }

        if (func(c) * func(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    cout << "Maximum iterations reached. No root found." << endl;
    return NAN; // Return NaN (not-a-number) to indicate failure.
}

int main()
{
    double a, b, tol;
    int maxIter;

    // Input parameters
    cout << "Enter the initial interval [a, b]: ";
    cin >> a >> b;
    cout << "Enter the tolerance (tol): ";
    cin >> tol;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIter;

    // Call the falsePosition function
    falsePosition(a, b, tol, maxIter);

    return 0;
}
