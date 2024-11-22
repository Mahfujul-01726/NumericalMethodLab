#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return x * x * x + 3 * x + 1;
}

double derivFunc(double x)
{
    return 3 * x * x + 3;
}

void newtonRaphson(double x, int y)
{
    int iterations = 0;
    while (iterations < y)
    {
        double h = func(x) / derivFunc(x);
        x = x - h;
        iterations++;

        // You can add a check to break the loop if h is very small
        if (fabs(h) < 1e-6)
        {
            break;
        }
    }

    cout << "The value of the root is : " << x << " after " << iterations << " iterations." << endl;
}

int main()
{
    cout << "Enter the initial value: ";
    double x;
    cin >> x;
    cout << "Enter the number of iterations: ";
    int y;
    cin >> y;
    newtonRaphson(x, y);
    return 0;
}
