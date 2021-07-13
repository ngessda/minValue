#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	const int size = 10;
	srand(time(NULL));
	int arr[size];
	int ebota;

	bool counter;

	for (int i = 0; i < size;)
	{
		counter = false;
		int RandomValue = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == RandomValue)
			{
				counter = true;
				break;
			}
		}
		if (!counter)
		{
			arr[i] = RandomValue;
			i++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				ebota = arr[i];
				arr[i] = arr[j];
				arr[j] = ebota;
			}
		}
	}
	cout << endl << "Min: " << arr[0];
}