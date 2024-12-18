#include <iostream>

#define SIZE 4

using namespace std;

int Find(int list[], int left, int right)
{
	if (left == right)
	{
		return list[left];
	}
	else
	{
		int pivot = (left + right) / 2;

		int leftMax = Find(list, left, pivot);

		int rightMax = Find(list, pivot + 1, right);

		if (leftMax > rightMax)
		{
			return leftMax;
		}
		else
		{
			return rightMax;
		}
	}
}

int main()
{
#pragma region 분할 정복
	// 주어진 2개 이상의 부분으로 문제를 나눈 뒤 각 부분
	// 문제에 대한 답을 재귀 호출을 이용해서 계산한 다음
	// 그 답으로부터 전체 문제의 답을 계산해내는 알고리즘입니다.

	// 분할(Divide)  : 주어진 문제를 두 개 혹은 그 이상의 형식으로 나눈다.

	// 정복(Conquer) : 나누어진 문제를 재귀적으로 해결해서 나누어진 문제를
	//                 더 이상 나누어 문제가 필요없을 때 까지 계속 분할합니다.

	// 통합(Combine) : 나누어서 해결한 문제들을 통합해서 원래 문제의 해답을 생성합니다.

	int list[SIZE] = { 5, 99, 2, 1 };

	cout << "list의 최대값 : " << Find(list, 0, SIZE - 1) << endl;

#pragma endregion

	return 0;
}