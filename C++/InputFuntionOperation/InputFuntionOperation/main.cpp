#include <iostream> // 표준입출력 함수 사용을 위한 헤더파일  

#include <random> // 랜덤함수 사용을 위한 헤더파일 

// random_device, default_random_engine, uniform_int_distribution 

#include <functional> // bind 사용을 위한 헤더파일 

using namespace std;

int main()

{

	int lotto[6]; // 생성된 번호를 저장할 배열  

	int i, j; // 반복을 위한 변수  

	int temp; // 값 교환 및 중복체크를 위한 임시변수  

	int cnt = 0; // 중복 횟수를 세기 위한 변수  

	// 현재 시간으로 랜덤함수의 시드값을 지정  

	random_device rd; // 하드웨어 리소스를 통한 난수를 생성합니다.  

	default_random_engine re(rd()); // 위의 난수를 시드로 하여 mt19937 랜덤 엔진을 선언합니다.  

	uniform_int_distribution<int> dist(1, 45); // 난수의 범위를 지정합니다.  

	auto rand = bind(dist, re); // 지정된 범위의 난수를 생성하는 rand 라는 난수 발생기를 생성합니다.  

	// 이후에 rand(); 구문으로 1 ~ 45 범위의 난수를 생성할 수 있습니다. 

	while (cnt != 7) // 숫자 중복의 횟수가 7이 아닐 동안 반복합니다.  

	{

		cnt = 0; // 중복 횟수 초기화  

		for (i = 0; i < 6; i++)

		{ // 번호 6개 생성  

			temp = rand();// 범위는 1부터 45까지입니다.  

			lotto[i] = temp; // 현재 생성된 번호가  

			for (j = 0; j < i; j++) // 이전에 생성된 번호와 같은지 비교합니다.  

				if (lotto[j] == temp) // 중복된 게 있으면  

				{ // 중복되지 않도록 다시 생성합니다.  

					i--;

					cnt++; // 중복의 횟수도 증가시킵니다.  

				}

		}

		// 번호 6개가 생성되었을 때 중복의 횟수가 7회이면 종료됩니다.  

		// 이러면 뭔가 조금 더 유니크한 숫자들이 나오지 않을까 싶어서 추가한 겁니다...  

	}

	// 오름차순 정렬  

	for (i = 0; i < 5; i++)

		for (j = i + 1; j < 6; j++)

			if (lotto[i] > lotto[j])

			{

				temp = lotto[i];

				lotto[i] = lotto[j];

				lotto[j] = temp;

			}

	//정렬 후 최종 출력  

	cout << "\t******* 로또 복권번호 생성기 *******\n\n";

	cout << "생성된 행운의 번호 : ";

	for (i = 0; i < 6; i++)

		cout << lotto[i] << ' ';

	cout << endl << endl << "프로그램을 종료합니다." << endl;

	system("pause"); // 프로그램이 자동으로 종료되지 않도록 일시정지합니다.  

	return 0;

}