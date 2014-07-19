//tester.c

#include "a1.c"
#include "a2.c"
#include "a3.c"

#include <time.h>

int main(){
	clock_t start, end;
	double clockTime;
	int numElements[] = {100, 200, 300, 400, 500, 
						600, 700, 800, 900,
						1000, 2000, 3000, 4000, 5000,
						6000, 7000, 8000, 9000};
	int elementArray[9000];
	int i;
	int sum;
	srand ( time(NULL) );


	//loop to populate elementArray
	for (i=0; i < 9000; i++){
		elementArray[i] = (rand() % 100)-50;
	}
	
	//testing enumeration
	printf("enumeration\n");
	printf("elements\ttime\tsum\n");
	for (i = 0; i < 9; i++){
		start = clock();
		sum = enumMaxSubarray(elementArray, numElements[i]);
		end = clock();
		clockTime = ((double) (end - start))/CLOCKS_PER_SEC;
		printf("%d\t%f\t%d\n",numElements[i], clockTime, sum );
	}

	//testing better enumeration
	printf("\n\nbetter enumeration\n");
	printf("elements\ttime\tsum\n");
	for (i = 0; i < 18; i++){
		start = clock();
		sum = betterEnumMaxSubarray(elementArray, numElements[i]);
		end = clock();
		clockTime = ((double) (end - start))/CLOCKS_PER_SEC;
		printf("%d\t%f\t%d\n",numElements[i], clockTime, sum );
	}
	//testing divide and conquer
	printf("\n\ndivide and conquer\n");
	printf("elements\ttime\tsum\n");
	for (i = 0; i < 18; i++){
		start = clock();
		sum = divAndConMaxSubarray(elementArray,0, numElements[i]);
		end = clock();
		clockTime = ((double) (end - start))/CLOCKS_PER_SEC;
		printf("%d\t%f\t%d\n",numElements[i], clockTime, sum );
	}

/* stuff goes here */
	/* old shit
	int testArray[] = {-18, -47, -40, -43, -2, 48, 31, -24, 36, -49, 4, -29, -4, -39, 12, 24, 8, 40, 45, -17, 6, -11, -5, -30, -8, 25, -44, -9, -20, -50, -12, -32, 41, 10, -42, -15, 11, -38, 37, 21, 33, -22, 16, -41, -46, -33, -26, 7, -3, -28, 29, 20, 27, 3, 15, 49, 23, -1, 14, 32, -31, -13, -48, -14, 13, 39, 46, -35, -36, 0, 17, -27, -21, 28, -7, 44, -10, 34, -19, 47, 42, -34, 5, 26, -45, 35, 9, -25, 38, -37, -23, 22, -6, -16, 18, 43, 30, 2, 19, 1};
	int length = 100;
	int sum = 0;
	sum = divAndConMaxSubarray(testArray, 0, length);


	end = clock();

	clockTime = ((double) (end - start))/CLOCKS_PER_SEC;

	printf("sum = %d\n",sum);
	printf("clock time %d", clockTime);
*/ 
	
	//
	//loop to create giant array







	return 0;
}