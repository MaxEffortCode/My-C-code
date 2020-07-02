/*
    Maxwell Bultman
    CSCI 1111-10
    June 2, 2020
    Assignment 1, Problem fathm_ft.c
*/

#include <stdio.h>

 int main(void)
 {
	 int feet, fathoms;
	 fathoms = 2;
	 feet = 6 * fathoms;
	 printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	 printf("Yes, I said %d feet!\n", 6 * fathoms);
	 getchar(); //because system("pause") does not work for me
	 return 0;
 }
 
 /*
 There are 12 feet in 2 fathoms!
Yes, I said 12 feet!


--------------------------------
Process exited after 1.941 seconds with return value 0
Press any key to continue . . .
*/
