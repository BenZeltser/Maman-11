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

int scalar_product(int u[], int v[], int size) {
	/*set u and v as integer arrays that represent the vectors.
	 * as each array slot represents a coordinate in the vector.
	 */

	//'ans' will be used as the final output. init to 0.
	int ans=0;
	//iterate through the two vectors simultaneously since we assume that size is identical.
	for (int i=0; i<size; i++) {
		printf("coordinate #%d: %d*%d=%d\n", i+1, u[i], v[i], u[i]*v[i]);
		//'ans' is an accumulating sum
		ans += (u[i]*v[i]);
	}
	//return the scalar product of the two given vectors in the given size.
	return ans;

}

int main() {
	printf("\n'my_scalar' is running...\n");
	// inform the user about the program that is running

	//get user input for a none dynamic array by identifying the size of the input first.
	//initiate size to 0 as default
	int size = 0;
	int input = 0; // input will be used as a temp

	//init arrays
	printf("Hello. Please enter number of coordinates of the vectors: \n");
	scanf("%d", &size);
	printf("number of coordinates: %d. \n", size);

	//u,v are vectors as elaborated in the first paragraph.
	int u[size];
	int v[size];

	//get the coordinates of U through a loop
	for (int i=0;i<size;i++){
		printf("enter coordinate #%d of vector u: \n", (i+1));
		scanf("%d", &input);
		u[i] = input;
	}

	printf("***Vector v*** \n");

	//get the coordinates of U through a loop
	for (int i=0;i<size;i++){
		printf("enter coordinate #%d of vector v: \n", (i+1));
		scanf("%d", &input);
		v[i] = input;
	}

	//apply the 'scalar_product function'

	int output = scalar_product(u,v,size);

	printf("* * * Result: %d * * * ", output);

	return output; //return the final result to the user

}





