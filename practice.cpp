#include <iostream>
#include <cmath>
using namespace std;

// Function for which we want to find the root
double f(double x)
{
    return x * x * x + 3 * x + 1; // Example function: f(x) = x^2 - 4
}

// Derivative of the function
double df(double x)
{
    return 3 * x * x + 3; // Derivative of x^2 - 4 is 2x
}

// Newton-Raphson method
double newtonRaphson(double x0, double epsilon, int maxIterations)
{
    double x = x0;
    int iteration = 0;

    while (std::abs(f(x)) > epsilon && iteration < maxIterations)
    {
        x = x - f(x) / df(x);
        iteration++;
    }

    return x;
}

int main()
{
    double initialGuess = 3.0; // Initial guess for the root
    double epsilon = 1e-6;     // Tolerance for stopping criteria
    int maxIterations = 100;   // Maximum number of iterations

    double root = newtonRaphson(initialGuess, epsilon, maxIterations);

    std::cout << "Approximate root: " << root << std::endl;

    return 0;
}
