/*


Finding the maximum sub-array
Divide and Conquer

If we split the array into two halves, we know that the maximum
subarray will either be
• contained entirely i n the first half,
•contained entirely in the second half, or
•made of a suffix of the first half of maximum sum and a prefix of the second half of maximum sum

The first two cases can be found recursively. The last case can be found in linear time
*/


#include <stdio.h>
#include <stdlib.h>

int divAndConMaxSubarray(int a[], int n)
{
	int* sumArray = malloc(n * sizeof(int));
	
	//base case, 1 or fewer elements in array

	//divide  array into two halves

	//maximum of 

		//maximum sum on left
		//recursive call

		//max sum on right
		//recursive call

		//max sum from midpoint
			//find max going left
			//find max going right
			//combine


}

int main(){
	int a[5] = {-1, 2, 3, 4, -5};
	int n = 5;
	divAndConMaxSubarray(a, n);
}
