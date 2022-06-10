#include <iostream>
using namespace std;

// 정렬함수를 만들 때 임시변수를 선언해서 현재 배열과 다음 배열의 값의 차이를 비교하고
// 더 큰값을 도출해내도록 임시변수에 다시 그 값을 할당하여 계속 큰값이 뒤로 가도록 했습니다.

void sortArray(int arr[], int n)
{
	int temp; //임시 변수 선언

	for (int i = 0; i < n; i++) // 크기만큼 반복
	{
		for (int j = 0; j < n - 1; j++) // 크기 - 1 만큼 반복
		{
			if (arr[j] > arr[j + 1]) // 현재 숫자와 다음 숫자값 비교
			{
				temp = arr[j];		 
				arr[j] = arr[j + 1]; // 큰값을 다음요소로
				arr[j + 1] = temp;	
			}
		}
	}
}


int main()
{
	int arr[5] = { 5, 2, 4, 1, 3 };

	sortArray(arr, 5);

	// arr : [1, 2, 3, 4, 5]

	cout << arr[0]<< endl;
	cout << arr[1]<< endl;
	cout << arr[2]<< endl;
	cout << arr[3]<< endl;
	cout << arr[4]<< endl;
}