#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return sin(x);  // Change this function to the one you want to integrate
}

double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }
    return h * sum;
}

int main() {
    double a = 0;    // Lower limit of integration
    double b = M_PI; // Upper limit of integration
    int n = 100;     // Number of trapezoids
    double result = trapezoidal(a, b, n);
    cout << "Integral of sin(x) from 0 to pi using the trapezoidal rule with " << n << " trapezoids = " << result << endl;
    return 0;
}

