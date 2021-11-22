#include "stdio.h"
#include "my_mat.h"
/*
void main()
{
    int i ,j ;
    int arr[10][10]; 
    for(int i = 0 ; i < 10 ; i++)
        {
            for(int j = i ; j < 10 ; j++)
            {
                printf("Enter value for disp[%d][%d]:", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        
    
    
} 
*/
void main() {
 int i , j;
 
 for(i=0; i < 20 ; i++) {
  putchar('$');
  for(j=0; j<10; j++) 
   putchar('#');
  printf("*\n");
  
 } 
 
 
 
 i=0;
 while( i < 20  ) {
  putchar('$');
  j=0;
  while( j<10 ) {
   putchar('#');
   j++;
  }
  printf("*\n");
  i++;  
 }
 
 
 } 
 
}

