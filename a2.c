/*

Algorithm 2: Better Enumeration
Notice that in the previous algorithm, 
the same sum is computed many
times. In particular, notice that Sigma(j)(k=i)a[k] 
can be computed from
Sigma(j-1)(k=1)a[k] in O(1) time, rather than
starting from scratch. Write a new version 
of the first algorithm that takes advantage 
of this observation
*/

#include <stdio.h>

int betterEnumMaxSubarray(int a[], int n){

	//counters
	int i, j; //1st term, curr term
	//don't need last term, go to the end every run
	
	//variables to store arrays
	/* array variables here */

	//sum variables
	int sum = 0;
	int best = 0;

	for (i = 0; i < n; i++){
		sum = 0; //new starting term, new sum
		for (j = i; j < n; j++){
			sum += a[j];
			if (sum > best){
				best = sum; //new winner

				/*
				TODO copy array segment here maybe
				*/
			}
		}
	}
	return best;
}
