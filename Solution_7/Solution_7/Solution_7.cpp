// arr[5][5]로 1~25숫자가 들어가는 배열을 for문으로 배치시키고,
// system("cls")로 실시간 갱신하며 while 문을 만들어 입력했을때
// switch문을 사용하여 if문을 써서 내가 입력한 값이 보드에 있는 숫자와
// 일치할 때, true 로 값을 반환하며 그 배열주소에 있는 숫자를 지우는 형식으로
// 처리하고, 빙고를 처리 하려면 같은 열또는 행또는 대각선을 처리해야 하는데,
// 대각선처리를 어떻게 해야할지 생각이 안납니다.


#include <iostream>
using namespace std;

int main()
{

	srand(time(NULL));

	int bingo_MaxNums = 25;
	int Rand_Nums = rand() % 25 + 1;
	int NumsArr[5][5];
	int answer = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
				cout << Rand_Nums;
		}
		cout << " ";
	}
}