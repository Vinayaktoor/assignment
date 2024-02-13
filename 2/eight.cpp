#include <iostream>
#include <cmath>
using namespace std;

double factorial(int a)
{
    double result = 1.0;
    for (int i = 1; i <= a; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    double x, n;
    cout << "Enter the value of X, n: ";
    cin >> x >> n;

    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 != 0)
        {
            sum -= pow(x, i + 1) / factorial(i + 1);
        }
        else
        {
            sum += pow(x, i + 1) / factorial(i + 1);
        }
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
