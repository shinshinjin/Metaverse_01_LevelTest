#include <iostream>
using namespace std;

// 투명한 왼변 역삼각형에 빈부분(사각형이 되도록)에 삼각형을 만들어주고,
// 그 다음에 다시 왼변삼각형을 붙이는 식으로 접근했습니다.

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 4; j >= i; j--) //투명한 역삼각형 만들기
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++) //거기에 *을 붙여서 삼각형 만들기
		{
			cout << "*";
		}
		for (int l = 1; l < i; l++) // 거기에 새로 삼각형 만들기
		{
			cout << "*";
		}
		

		cout << endl;
	}
}