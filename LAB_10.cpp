#include <iostream>
#include<ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL));

	int arr_Length, num_del, * arr, * new_arr;

	cout << "Введите длину массива" << endl;
	cin >> arr_Length;

	if (arr_Length < 1)
	{
		while (arr_Length <= 0)
		{
			cout << "Введите длину массива (>0)" << endl;
			cin >> arr_Length;
		}
	}

	arr = new int[arr_Length];

	cout << "Сформирован массви: \n";

	for (int i = 1; i <= arr_Length; i++ )
	{
		arr[i] = rand() % 50;
		cout << arr[i]<<'\t';
	}

	cout << "\nКакой элемент удалить?" << endl;
	cin >> num_del;

	while(num_del <= 0 || num_del > arr_Length)
	{		 
		cout << "Такого элемента в массиве нет, введите ещё раз\n";
		cin >> num_del;
	}

	new_arr = new int[arr_Length - 1];

	for (int i = 1; i<num_del; i++)
	{
		new_arr[i] = arr[i];
	}

	for (int i = num_del; i <= arr_Length ; i++)
	{
		new_arr[i] = arr[i+1];
	}

	//delete[] arr;
	cout << "Измененный массив:\n";

	for (int i = 1; i <= arr_Length - 1; i++)
	{
		cout << new_arr[i] << '\t';
	}

	return 0;
}

