
using namespace std;

class GaussSeidel
{
    public:
        /**
        @param float **a  the augmented matrix
        @param  n  array size
        */
        void printMatrix(float **a, int n);
        /**
        @param float **a  the augmented matrix
        @param  n  array size
        @param float **x  the array of solutions
        @param iter is the number of iterations
        */
        void solve(float **a, int n, float *x, int iter);
        /**
        Checks solution validity
        */
        bool valid_solution = false;
    protected:

    private:

};
