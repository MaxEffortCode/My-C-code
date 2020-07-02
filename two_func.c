/*
    Maxwell Bultman
    CSCI 1111-10
    June 2, 2020
    Assignment 1, Problem two_func.c

*/


 #include <stdio.h>
 
 void butler(void); /* ANSI/ISO C function prototyping */// a sad excuse for a function
 
 int main(void)
{
	 printf("I will summon the butler function.\n");
	 butler();
	 printf("Yes. Bring me some tea and writeable DVDs.\n");
	 getchar(); //because system("pause") does not work for me
	 return 0;
}

void butler(void) /* start of function definition */
{
 	printf("You rang, sir?\n");
}

/*
I will summon the butler function.
You rang, sir?
Yes. Bring me some tea and writeable DVDs.


--------------------------------
Process exited after 1.196 seconds with return value 0
Press any key to continue . . .
*/
 
