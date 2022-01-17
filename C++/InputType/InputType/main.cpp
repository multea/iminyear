#include <cstdio>

int getSum(int a,int b) {
	return a + b;
}
int getDef(int a, int b) {
	return a - b;
}
int getZegob(int a, int b) {
	int value = a;
	
	for (int i = 1; i < b; i++) {
		value = value * b;
	}
	return value;
}

int getInput() {
	int input;
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	return input;
}

int main() {
	int input1;
	int input2;
	int operation;

	printf("숫자를 입력해 주세요 : ");
	input1 = getInput();

	printf("숫자를 입력해 주세요 : ");
	input2 = getInput();

	printf("숫자를 입력해 주세요 : ");
	operation = getInput();

	int result;

	if (operation == 0) {
		result = getSum(input1,input2);
		printf("결과 : %d", result);
	}
	else if (operation == 1) {
		result = getDef(input1, input2);
		printf("결과 : %d", result);
	}
	else if (operation == 2) {
		result = getZegob(input1, input2);
		printf("결과 : %d", result);
	}
	else {
		printf("잘못된 숫자를 입력하였습니다. 관리자에게 문의 바랍니다.!");
	}

	return 0;
}