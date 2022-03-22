
#include <stdio.h>
#include <stdlib.h>

/*
 * On this program we will receive 2 inputs from the user,
 * their type will be an unsigned long. we will find the mutual
 * bits that are turned on within the two given numbers.
 *
 * example:
 * x = 0101010
 * y = 1111111
 * answer = 3
 *
 * how it will be done: we will be using the "AND" bitwise
 * operator. this operator will iterate through the bits of the two
 * given numbers, being x and y. and for every bit in the i'th index
 * it will only maintain the bit as '1' if the i'th index is 1 on both
 * x and y. otherwise it will be '0'.
 *
 *
 *
 *
 */

int bit_count(unsigned long u) {
  /*
   *The Idea behind the function:
   *Take the original number n and store in the count variable.
   *count=n. then we will
   *Shift the original number 1 bit to the right and subtract from the orignal.
   *count = n - (n >>1).Now Shift the original number 2 bits to the right and subtract from count;
   *count = n - (n>>1) - (n>>2);

Keep doing this until you reach the end.
count = n - (n>>1) - (n>>2) - ... -( n>>31);

*/
    unsigned int Count;
    Count = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
    return ((Count + (Count >> 3)) & 030707070707) % 63;
}

int main() {
	long unsigned x,y;
	int answer,temp;
	printf("'find_bits' is running... \n");
	/*get the user input */
	printf("Hello. please enter the first number: \n");
	scanf("%lu",&x);
	printf("please enter the second number: \n");
	scanf("%lu",&y);
	/*Now we will perform the 'AND' operator on x and y
	 *and then we will use the function bit_counts to count bits */
	temp = x & y;
	answer = bit_count(temp);
	printf("number of mutual switched on bits: %d \n", answer);
	return answer;
}

