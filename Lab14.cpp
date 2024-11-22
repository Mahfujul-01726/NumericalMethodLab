#include <iostream>
#include <cmath>


double function(double x) {
    
    return x * x;
}


double trapezoidalRule(double (*func)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double result = (func(a) + func(b)) / 2.0;

    for (int i = 1; i < n; ++i) {
        double x_i = a + i * h;
        result += func(x_i);
    }

    return result * h;
}

int main() {
    
    double a = 0.0;
    double b = 1.0;
    int n = 100;  // Number of subintervals

   
    double result = trapezoidalRule(function, a, b, n);

    
    std::cout << "Result of integration: " << result << std::endl;

    return 0;
}

































/*
#include <iostream>
#include <math.h>
#define f(x) 1 / (1 + pow(x, 2))

using namespace std;
int main()
{
    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;

    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub-intervals: ";
    cin >> subInterval;

    stepSize = (upper - lower) / subInterval;

    integration = f(lower) + f(upper);

    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;
        integration = integration + 2 * (f(k));
    }

    integration = integration * stepSize / 2;
    cout << endl
         << "Requred value of integration is: " << integration;

    return 0;
}

*/