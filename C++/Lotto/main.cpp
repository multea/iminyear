// Lotto Program
#include <iostream>
#include <time.h> // ���� �Լ��� ����ϱ� ����

using namespace std;

int main(void) {

    // 1���� 45������ ��
    int iNum[45] = {};
    for (int i = 0; i < 45; i++) {
        iNum[i] = i + 1;
    }

    srand((unsigned int)time(0)); // time seed

    // �ε����� �������� �̾Ƽ� ���Ҹ��ϹǷ�, �ߺ��� ���� ������ �ʴ´�.
    // Suffle
    int iTemp, idx1, idx2;
    for (int i = 0; i < 100; i++) {
        idx1 = rand() % 45;
        idx2 = rand() % 45;

        // swap
        iTemp = iNum[idx1];
        iNum[idx1] = iNum[idx2];
        iNum[idx2] = iTemp;
    }

    // ��� ���
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << "��° ��ȣ : " << iNum[i] << endl;
    }
    cout << "���ʽ� ��ȣ : " << iNum[5] << endl;

    return 0;
}