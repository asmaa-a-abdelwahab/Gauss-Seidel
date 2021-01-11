#include <iostream>
#include <vector>
#include "gauss_seidel.h"

using namespace std;

int main()
{
    int iDim, iters;
    std::vector<float> _scale;
    std::cout.precision(4);        //set precision
    std::cout.setf(ios::fixed);    //display using the fixed precision
    std::cout << "\nEnter the no. of equations\n";
    std::cin >> iDim;                //input the no. of equations

    float *p[iDim];
    float arrA[iDim][iDim+1], x[iDim];  //Array declaration to store the augmented-matrix elements
    std::cout << "\nEnter the elements of the augmented-matrix row-wise:\n";
    for (int i = 0; i < iDim; i++)
        for (int j = 0; j <= iDim; j++)
        {
            std::cout << "A[" << i << "][" << j << "]=";
            std::cin >> arrA[i][j];
        };
    for (int i = 0; i < iDim; ++i)
        p[i] = arrA[i];

    std::cout << "\nThe matrix to be solved\n";
    GaussSeidel matrix = GaussSeidel();
    matrix.printMatrix(p, iDim);

    std::cout << "\nEnter the initial values of the variables:\n";
    for (int i = 0; i < iDim; i++)
    {
        std::cout << "X[" << i << "] = ";
        std::cin >> x[i];
    }
    std::cout << "\nEnter the no. of iterations\n";
    std::cin >> iters;

    for (int i = 0; i < iDim; ++i)
        p[i] = arrA[i];

    for (int i = 0; i < iters; i++)
        matrix.solve(p, iDim, x, iters);
    return 0;
}
