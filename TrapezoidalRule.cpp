
#include <iostream>
#include <math.h>

#define f(x) 1 / (1 + pow(x, 2))

using namespace std;
int main()
{
    float lower, upper, integration = 0.0, stepSize, k; // step size= usase of step size  h=stepsize
    int i, subInterval;

    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub intervals: ";
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
         << "Required value of integration is: " << integration;

    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
#define function(x) (1/(1+(x*x)))
int main()
{
    double lowerLimit, upperLimit, h;
    cout << "Lower Limit:";
    cin >> lowerLimit;
    cout << "Upper Limit:";
    cin >> upperLimit;
    cout << "H:" ;
    cin >> h;
    double sum = 0.0;
    for(double i=lowerLimit;i<=upperLimit;i+=h){
        if(i == lowerLimit || i==upperLimit){
            sum += ((h*function(i))/2);
        }else{
            sum += (h*function(i));
        }
    }
    cout << "Integration of that funtion is " << sum << '\n';
    return 0;
}
*/