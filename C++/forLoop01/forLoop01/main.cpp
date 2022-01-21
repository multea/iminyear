#include <cstdio>

int main() {
	
	int input;
	printf("숫자를 입력하시오. : ");

	fseek(stdin,0,SEEK_END);
	scanf_s("%d", &input);

	
	printf("Result : %d" ,input);

	return 0;
}