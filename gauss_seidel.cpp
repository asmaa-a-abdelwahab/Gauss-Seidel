//Gaus-seidel (Written by: Asmaa Ali - Nile University
#include <iostream>
#include <iomanip>
#include <algorithm>
#include "gauss_seidel.h"

using namespace std;

void GaussSeidel::printMatrix(float **a, int n)
{
    for (int i = 0; i < n; i++)            //print the new matrix
    {
        for (int j = 0; j <= n; j++)
            std::cout << a[i][j] << std::setw(16);
        std::cout << "\n";
    };
    std::cout << "\n";
}

void GaussSeidel::solve(float **a, int n, float *x, int iter)
{
    float m[n], tolerance;
    while (iter> 0 && iter >= 30) {
        for (int i = 0; i < n; i++){
            x[i] = a[i][n] / a[i][i];
            for (int j = 0; j < n; j++){
                if (j == i)
                continue;
                x[i] = x[i] - ((a[i][j] / a[i][i]) * m[j]);
                m[i] = x[i];
            }
            cout<<"x"<<i + 1 << "="<<x[i]<<" ";
        }
        cout << "\n";
        iter--;
    }
}
