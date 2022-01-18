#include <cstdio>

int main() {
	// break, continue;

	int input;

	printf("값을 입력하시오 : ");
	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		for (int k = 0; k < input - i - 1; k++) {
			printf(" ");
		}
		for (int j = 0; j < i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}