#include <iostream>

#define SIZE 5

using namespace std;

// void bubbleSort(int array[])
// {
// 	for (int i = 0; i < SIZE - 1; i++)
// 	{
// 		cout << i + 1 << " 회전";
// 		for (int j = 0; j < SIZE - i - 1; j++)
// 		{
// 			if (array[j] > array[j + 1])
// 			{
// 				int swap = array[j];
// 				array[j] = array[j + 1];
// 				array[j + 1] = swap;
// 			}
// 		}
// 
// 		for (int k = 0; k < SIZE; k++)
// 		{
// 			cout<< " " << array[k] << " ";
// 		}
// 		cout << endl;
// 	}
// }

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘입니다.

	// int array[] = { 13, 8, 97, 1, 36 };
	int list[SIZE] = { 13, 8, 97, 1, 36 };

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < (SIZE - i) - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
			}
		}
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}

	// cout << "초기의 배열: ";
	// 
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	cout << " " << array[i] << " ";
	// }
	// 
	// cout << endl;
	// cout << endl;
	// bubbleSort(array);
	// 
	// cout << endl;
	// 
	// cout << "정렬 후 배열: ";
	// 
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	cout << " " << array[i] << " ";
	// }
	// 
	// cout << endl;

#pragma endregion

	return 0;
}