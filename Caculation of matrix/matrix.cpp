#include <stdio.h>

void print(int A[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf(" |");
        for (int j = 0; j < 3; j++)
            printf("%3d", A[i][j]);
        printf(" |\n");

    }
}


int main()
{
    int A[3][3] = { {1, 0, 4}, {2, 7, 5}, {-3, 6, -8} };
    int B[3][3] = { {-2, 6, 3}, {1, -1, 2}, {-3, 4, 5} };
    int I[3][3] = { {0, 1, 0}, {0, 1, 0}, {0, 0, 1} };
    int P[3][3] = { {1, 1, 0}, {0, 1, 0}, {1, 1, 0} };
    int Q[3][3] = { {1, 1, 1}, {0, 0, 0}, {1, 0, 1} };
    int C[3][3];

    /*
    A, B, C, I, P, Q, C에 아무 숫자 집어넣어라.
    */

    // 행렬의 합

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    print(C);    printf("\n");

    // 행렬의 차

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] - B[i][j];

    print(C);    printf("\n");

    // 행렬의 스칼라 곱

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = 3 * A[i][j];

    print(C);    printf("\n");

    // 행렬의 곱셈

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
                C[i][j] = A[i][k] * I[k][j];
        }

    print(C);    printf("\n");

    // 전치행렬(transpose matrix)

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[j][i];

    print(C);    printf("\n");

    // 부울행렬 연산자 //

    // 합(join)

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = P[i][j] | Q[i][j];

    print(C);    printf("\n");

    // 교차(meet)

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = P[i][j] & Q[i][j];

    print(C);    printf("\n");

    // 부울곱(Boolen product)

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
                C[i][j] = P[i][k] * Q[k][j];
        }

    print(C);    printf("\n");

    return 0;
}