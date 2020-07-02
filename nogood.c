/*
    Maxwell Bultman
    CSCI 1111-10
    June 2, 2020
    Assignment 1, Problem nogood.c 

*/

 /* nogood.c -- a program without errors */
 #include <stdio.h>
 
 int main(void)
 {
	 int n, n2, n3;
	 /* this program had several errors*/
	 n = 5;
	 n2 = n * n;
	 n3 = n2 * n;
	 printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
	 getchar();
	 return 0;
}

/*
n = 5, n squared = 25, n cubed = 125


--------------------------------
Process exited after 4.192 seconds with return value 0
Press any key to continue . . .

*/
