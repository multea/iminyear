#include <cstdio>

int main() {
	
	int input;
	printf("���ڸ� �Է��Ͻÿ�. : ");

	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &input);

	
	printf("Result : %d" ,input);

	return 0;
}