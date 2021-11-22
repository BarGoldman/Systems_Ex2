#include <stdio.h>
#include "my_mat.h"
#define N 10
#define num 300000
/* The program receives from the user the matrix values 10X10 */
void A(int mat[][N] ,int n)
{ 
    int b;
    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            scanf("%d", &b); //Receives value from the user
            mat[i][j] = b ; //Defines the value of the mat[i][j] 
        }
    }
}
/*change the matrix to the shortest route from i to j*/
void Algo(int mat[][N] ,int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i != j && mat[i][j] == 0) //if i ans j different and the route does not exist beetwin i and j
            {
                mat[i][j] = num; //valu of mat[i][j] is num = 300000
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
                    mat[i][j] = mat[i][k]+mat[k][j]; // mat[i][j] = the shortest route from i to j, 
                }
            }
        }
    }
}
/* The program receives from the user the values i and j and prints "True" if 
 there is a trajectory from i
 To j .other, print "False".*/ 
void B(int mat[][N] , int a , int b)
{
    int temp[N][N]; // new matrix NxN
    for (int i = 0; i < N ; i++) 
    {
        for (int j = 0; j < N ; j++)
        {
            temp[i][j] = mat[i][j];//copy the same matrix mat
        }
    }
    Algo(temp ,N);
    if (temp[a][b] != num && a != b) 
    {
        printf("True\n"); //print true if there is a trajectory from i To j
    } 
    else
    {
        printf("False\n");//print false if there is not trajectory from i To j
    }   
}
/*The program captures the i and j values from the user and prints the shortest route from
i to j, if the program route does not exist Print -1*/
void C(int mat[][N] , int a , int b)
{
    int temp[N][N];// new matrix NxN
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            temp[i][j] = mat[i][j];//copy the same matrix mat
        }
    }
    Algo(temp,N); 
    if (temp[a][b] == num || a == b)
    {
        printf("%d\n",-1); // print -1 if the route does not exist 
    }      
    else
    {
        printf("%d\n",temp[a][b]); //prints the shortest route from i to j,
    }   
}
