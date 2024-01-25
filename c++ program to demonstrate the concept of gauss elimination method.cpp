#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void gaussianElimination(int n, double A[MAX_SIZE][MAX_SIZE], double b[MAX_SIZE])
{
    for (int k = 0; k < n-1; k++)
    {
        for (int i = k+1; i < n; i++)
        {
            double factor = A[i][k] / A[k][k];
            for (int j = k+1; j < n; j++)
            {
                A[i][j] -= factor * A[k][j];
            }
            b[i] -= factor * b[k];
        }
    }

    // Back substitution
    double x[MAX_SIZE];
    for (int i = n-1; i >= 0; i--)
    {
        x[i] = b[i];
        for (int j = i+1; j < n; j++)
        {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i];
    }

    // Print the solution
    cout << "Solution:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "x" << i << " = " << x[i] << endl;
    }
}

int main()
{
    int n;
    double A[MAX_SIZE][MAX_SIZE];
    double b[MAX_SIZE];

    // Read the input
    cout << "Enter the number of equations: ";
    cin >> n;
    cout << "Enter the coefficients of the equations: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
        cin >> b[i];
    }

    // Solve the system of linear equations using Gaussian elimination method
    gaussianElimination(n, A, b);

    return 0;
}

