#include <iostream>
#include <cmath>

using namespace std;

double correlationCoefficient(int X[], int Y[], int n)
{
    int sum_X = 0, sum_Y = 0, sum_XY = 0;
    int squareSum_X = 0, squareSum_Y = 0;

    for (int i = 0; i < n; i++) {
        // sum of elements of array X.
        sum_X += X[i];

        // sum of elements of array Y.
        sum_Y += Y[i];

        // sum of X[i] * Y[i].
        sum_XY += X[i] * Y[i];

        // sum of square of array elements.
        squareSum_X += X[i] * X[i];
        squareSum_Y += Y[i] * Y[i];
    }

    // use formula for correlation coefficient
    double corr = (double)(n * sum_XY - sum_X * sum_Y) / sqrt((double)(n * squareSum_X - sum_X * sum_X) * (n * squareSum_Y - sum_Y * sum_Y));

    return corr;
}

int main()
{
    // sample data
    int X[] = { 10, 20, 30, 40, 50 };
    int Y[] = { 30, 40, 50, 60, 70 };

    int n = sizeof(X) / sizeof(X[0]);

    // calculate correlation coefficient
    double corr = correlationCoefficient(X, Y, n);

    // display result
    cout << "Correlation coefficient = " << corr << endl;

    return 0;
}

