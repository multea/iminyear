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

	printf("���ڸ� �Է��� �ּ��� : ");
	input1 = getInput();

	printf("���ڸ� �Է��� �ּ��� : ");
	input2 = getInput();

	printf("���ڸ� �Է��� �ּ��� : ");
	operation = getInput();

	int result;

	if (operation == 0) {
		result = getSum(input1,input2);
		printf("��� : %d", result);
	}
	else if (operation == 1) {
		result = getDef(input1, input2);
		printf("��� : %d", result);
	}
	else if (operation == 2) {
		result = getZegob(input1, input2);
		printf("��� : %d", result);
	}
	else {
		printf("�߸��� ���ڸ� �Է��Ͽ����ϴ�. �����ڿ��� ���� �ٶ��ϴ�.!");
	}

	return 0;
}