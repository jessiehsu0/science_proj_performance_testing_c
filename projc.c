#include <stdio.h>
#include <time.h>

int main () {

	int a;

	double sum = 0;
	
	clock_t start, end;
	double elapsedtime;

	start = clock();

	for( a = 0; a < 1000000; a++){
		sum += a;
		//printf("value of sum: %f\n", sum);
	}

	end = clock();
	elapsedtime = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("elapsed time: %f", elapsedtime);

	return 0;
}
