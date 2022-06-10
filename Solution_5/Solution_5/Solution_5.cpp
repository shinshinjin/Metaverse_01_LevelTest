#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//A.최대 번호값과 생성 숫자 개수를 입력하면 해당 조건 내에서 
// 중복되지 않는 숫자를 출력하는 로또 번호 생성기를 구현.
//B.최대값 : 60, 생성숫자 : 10 을 입력하면 1 ~60 사이의 중복되지 
// 않는 숫자 10개를 생성한다.

// 랜덤으로 값을 나오게 rand를 줘서 했습니다만..
// 중복값 처리를 하는것에서 멈췄습니다.



int main()
{
	int MaxNums = 0; // 최대 숫자
	int numss = 0; // 숫자 갯수

	cin >> MaxNums >> numss; //값을 입력
	srand(time(NULL));
	int rand_num;


	for (int i = 0; i < numss; i++)
	{
		rand_num = rand() % MaxNums + 1;
		int temp = rand_num;
		cout << rand_num << endl;
	}

	// 중복처리...


}