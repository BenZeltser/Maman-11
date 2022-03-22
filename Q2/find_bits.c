
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

int bit_count(unsigned int u) {
  /*
The Idea beheind the function:
Take the original number n and store in the count variable.
count=n;

Shift the orignal number 1 bit to the right and subtract from the orignal.
count = n - (n >>1);

Now Shift the original number 2 bits to the right and subtract from count;
count = n - (n>>1) - (n>>2);

Keep doing this until you reach the end.
count = n - (n>>1) - (n>>2) - ... -( n>>31);

*/

    unsigned int uCount;
    uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
    return ((uCount + (uCount >> 3)) & 030707070707) % 63;

}

int main() {
	long unsigned x = 7;
	long unsigned y = 1;
	int ans;
	ans = bit_count(x);
	printf("# of bits in %lu: %d",x,ans);
	return 0;
}

