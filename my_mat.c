#include <stdio.h>
#include "my_mat.h"
#define N 10
#define num 300000

void A(int mat[][N] ,int n)
{ 
    int b;
    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            scanf("%d", &b);
            mat[i][j] = b ;
        }
    }
}

void Algo(int mat[][N] ,int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i != j && mat[i][j] == 0)
            {
                mat[i][j] = num; 
            }
        }
    }
    for(int k = 0 ; k < N ; k++)
    {
        for (int i = 0 ; i < N ; i++)
        {
            for(int j = 0 ; j < N ; j++)
            {
                if(mat[i][k]+mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k]+mat[k][j]; 
                }
            }
        }
    }
}

void B(int mat[][N] , int a , int b){
    int temp[N][N];
    for (int i = 0; i < N ; i++)
    {
        for (int j = 0; j < N ; j++)
        {
            temp[i][j] = mat[i][j];
        }
    }
    Algo(temp ,N);
    if (temp[a][b]  != num && a != b)
    {
        printf("True\n");
    } 
    else
    {
        printf("False\n");
    }   
}

void C(int mat[][N] , int a , int b)
{
    int temp[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            temp[i][j] = mat[i][j];
        }
    }
    Algo(temp,N); 
    if (temp[a][b] == num || a == b)
    {
        printf("%d\n",-1);
    }      
    else
    {
        printf("%d\n",temp[a][b]);
    }   
}
