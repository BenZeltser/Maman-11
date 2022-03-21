/*
 * my_scalar.c
 *
 *  Created on: Feb 28, 2022
 *      Author: Ben Zeltser
 *      ID: 313327579
 *
 * on this file, the program will receive 2 inputs from the user,
 * being 2 vectors. the program will return the scalar product
 * to the user as an Integer.
 *
 * The implementation will be done by breaking each coordinate
 * of the vector, and multiplying it with the other according
 * coordinate of the 2nd vector. we will sum the
 * multiplications and return the sum as the final answer.
 *
 * also, since it has been verbally asked, the reason that we needed to receive a number in the function,
 * was to represent the size of the two vectors which we may assume are within the same size.
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * Print the scalar product of two given vectors.
 *
 * Examples:
 *
 * (1,2,3) * (2,3,4) = 1*2 + 2*3 + 2*4 = 2 + 6 + 8 = 16
 * (1,2,3) * (4,5,6) = 1*4 + 2*5 + 3*6 = 4 + 10 + 18 = 32
 * (0,0,0) * (1,1,1) = 0*1 + 0*1 + 0*1 = 0
 */

int main() {
	int size,input,i, uc, vc, sum;
	printf("\n'my_scalar' is running...\n");
	vc=uc=sum=0;
	/* inform the user about the program that is running */

	/*get user input for a none dynamic array by identifying the size of the input first.
	initiate size to 0 as default */
	size = 0;
	/* input will be used as a temp.
	i and j used as indecies of the for loops. */
	input = 0;
	/*init arrays */
	printf("Hello. Please enter number of coordinates of the vectors: \n");
	scanf("%d", &size);
	printf("number of coordinates: %d. \n", size);

	/* u,v are vectors as elaborated in the first paragraph.
	int u[size];
	int v[size]; */

	/* get the coordinates of U */
	for (i=0;i<size;i++){
		printf("enter coordinate #%d of vector U: \n", (i+1));
		scanf("%d", &input);
		/* uc is used to hold the i'th coordinate of vector u */
		uc = input;
	/* get the coordinates of V */
		printf("enter coordinate #%d of vector V: \n", (i+1));
		/* vc is used to hold the i'th coordinate of vector v */
		scanf("%d", &input);
		vc = input;
		sum = sum + vc*uc;
		printf("\n");

	}

	printf(" * * * Result: %d * * * \n", sum);

	/*return the final result to the user */

	return 0;
}





