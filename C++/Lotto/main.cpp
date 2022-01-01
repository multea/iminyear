// Lotto Program
#include <iostream>
#include <time.h> // 랜덤 함수를 사용하기 위해

using namespace std;

int main(void) {

    // 1부터 45까지의 수
    int iNum[45] = {};
    for (int i = 0; i < 45; i++) {
        iNum[i] = i + 1;
    }

    srand((unsigned int)time(0)); // time seed

    // 인덱스를 랜덤으로 뽑아서 스왑만하므로, 중복된 값은 나오지 않는다.
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

    // 결과 출력
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << "번째 번호 : " << iNum[i] << endl;
    }
    cout << "보너스 번호 : " << iNum[5] << endl;

    return 0;
}