/*
    Maxwell Bultman
    CSCI 1111-10
    June 2, 2020
    Assignment 1, Problem programming exercise 4
*/

#include <stdio.h>


void jolly(void){
	
	printf("For he's a jolly good fellow!\n");

}

void deny(void){
	
	printf("Which nobody can deny!\n");
	
}


int main(void){
	
	int i;
	
	for(i=0; i<3; i++){
		
		jolly();
		
	}
	
	deny();
	getchar();

}

/*
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!


--------------------------------
Process exited after 1.533 seconds with return value 10
Press any key to continue . . .
*/
