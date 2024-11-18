/*Mia is a diligent student who is passionate about mathematics. She recently started learning about matrices and their properties. One day, she decided to write a program to explore the lower triangular part of a NxN matrix.



Write a program that takes a square matrix as input and computes the sum of elements located below the main diagonal. The matrix is of size NxN, and the sum includes all elements in the lower triangular part (excluding the main diagonal).



Example



Input:

3

1 0 0

4 5 0

7 8 9

Output:

19

Explanation:

The lower triangular matrix elements are 4, 7, and 8. The sum is 4+7+8 = 19.

Input format :
The first line of input consists of an integer N, representing the size of the square matrix.

The next N lines consist of N integers, representing the elements of the matrix.

Output format :
The output displays a single integer representing the sum of elements in the lower triangular part of the matrix (excluding the main diagonal).

*/


#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N][N];
    int row, col, sum = 0;

    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            if(col < row)
            {
                sum += A[row][col];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
