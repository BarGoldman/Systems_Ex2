#include <stdio.h>
#define N 10
/* The program receives from the user the matrix values 10X10 */
void A(int [][N] ,int);
/* The program receives from the user the values i and j and prints "True" if there is a trajectory from i
To j .other, print "False. when true = 1 ; fals = 0 ;  */
void B(int [][N] , int , int);
/*The program captures the i and j values from the user and prints the shortest route from
i to j, if the program route does not exist Print 1. */
void C(int [][N] , int , int);