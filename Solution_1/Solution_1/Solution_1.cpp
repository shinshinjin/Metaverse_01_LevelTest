#include <iostream>

// num은 a로, a는 b로, b는 num(결국a) 가 되므로 값이 뒤바뀐다는 메커니즘으로 짰습니다.

void swap(int* a, int* b) //A
{
	int num = *a; //a 포인터를 만들어준다.
	*a = *b; //a 포인터(주소)값을 b로 이전시켜준다.
	*b = num; //b에 num을 주어 a로 변환한다.
}

void swap(int& a, int& b) //B
{
	int num2 = a;
	a = b;
	b = num2;
}

int main()
{
	int a[2] = { 1, 2 }; // a 배열 생성

	swap(&a[0], &a[1]); //a의 주소값 입력 (B일 경우 &을 제거한다)

	std::cout << a[0] << std::endl; //변환됨을 알 수 있다.
}