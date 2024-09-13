
#include <iostream>
#include <omp.h>

#define N 10 //size of the matrices

void Matrix_Multiplication(const double A[N][N], const double B[N][N],double C[N][N])
{
   #pragma omp parallel for collapse(2)  //Implicit Parallelism
      for (int i=0; i<N; ++i)
          {
             for(int j=0; j<N; ++j)
                {
                    C[i][j] = 0;
                    for (int k =0; k< N; ++k)
                       {
                          C[i][j] += A[i][k]*B[k][j];
                        }
                 }
            }
}
int main()
{
   double A[N][N], B[N][N], C[N][N];
     //Initialize matrices A and B 
     for (int i=0; i<N; ++i)
        {
          for (int j=0; j<N; ++j)
            {
              A[i][j] = i+j;
              B[i][j] = i-j;
             }
         }

 //Measure the time taken for matrix multiplication
 double start_time = omp_get_wtime();
 Matrix_Multiplication(A,B,C);
 double end_time = omp_get_wtime();

 std::cout <<"Matrix Multiplication completed in" << (end_time - start_time) <<"seconds." <<std::endl;
 
// Print the entire resulting matrix
    std::cout << "Resulting matrix C (size 10x10):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

 return 0;
}     

