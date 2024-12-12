﻿#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한
	// 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

	int list[SIZE] = {5,13,9,1,2};

	for (int i = 0; i < SIZE - 1; i++)
	{
		int index = i;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (list[j] < list[index])
			{
				index = j;
			}
		}

		if (list[i] > list[index])
		{
			std::swap(list[i], list[index]);
		}
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}