#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{

    return x * x - 3 * x + 2;
}

double df(double x)
{

    return 2 * x - 3;
}

double newtonRaphson(double initialGuess, double tolerance, int maxIterations)
{
    double x = initialGuess;
    int iteration = 0;

    while (iteration < maxIterations)
    {
        double delta = f(x) / df(x);
        x -= delta;

        if (abs(delta) < tolerance)
        {
            return x;
        }

        iteration++;
    }

    return x;
}

int main()
{
    double initialGuess;
    double tolerance;
    int maxIterations;

    cout << "Enter initial guess: ";
    cin >> initialGuess;

    cout << "Enter tolerance: ";
    cin >> tolerance;

    cout << "Enter maximum number of iterations: ";
    cin >> maxIterations;

    double root = newtonRaphson(initialGuess, tolerance, maxIterations);

    cout << "Approximate root: " << root << endl;

    return 0;
}
