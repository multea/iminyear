#include <cstdio>

int main() {
	
	int input;
	printf("���ڸ� �Է��Ͻÿ�. : ");

	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		for (int k = 0; k < i ; k++) {
			printf(" ");
		}
		for (int j = 0; j < input - i; j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}