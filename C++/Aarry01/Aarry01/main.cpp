#include <cstdio>

int main() {

	/*
	int myArray[20];

	
	for (int i = 0; i < 20; i ++) {
		myArray[i] = (i + 1) * 2;
	}

	for (int i = 0; i < 20; i++) {
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}

	*/

	/* 피보나치 수열
	int fibo[20];
	fibo[0] = 1;
	fibo[1] = 1;

	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	for (int i = 0; i < 20; i++) {
		printf("fibo[%d] = %d\n", i, fibo[i]);
	}
	*/
	/*
	int myArray[10][10];

	int count = 1;
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			myArray[i][k] = count;
			count++;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			printf("%d", myArray[i][k]);
		}
		printf("\n");
	}
	*/

	int myArray1[5][5];
	int myArray2[5][5];
	int myArray3[5][5];

	/* */
	int count = 1;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			myArray1[i][k] = count;
			count++;
		}
	}

	count = 1;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			myArray2[i][k] = count * 2;
			count++;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			myArray3[i][k] = (k + 1) * 2;
		}
	}

	





	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("%d", myArray2[i][k]);
		}
		printf("\n");
	}



	return 0;
}