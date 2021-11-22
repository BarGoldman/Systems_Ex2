#include <stdio.h>
#include "my_mat.h"
#define N 10

int main()
{
  char a ; 
  int mat[N][N];
  while (1)
  {
        scanf ("%c", &a);
        if(a == 'A')
        {
            A(mat,N); 
            scanf ("%c", &a);
        }
        if(a == 'B')
        {
            int i,j;
            scanf ("%d", &i);
            scanf ("%d", &j);
            B(mat,i,j);
            scanf ("%c", &a);
        }
        if(a == 'C')
        {
            int i,j;
            scanf ("%d", &i);
            scanf ("%d", &j);
            C(mat,i,j);
            scanf ("%c", &a);
        }
        if(a == 'D'){
           break;
        }
  }
}

