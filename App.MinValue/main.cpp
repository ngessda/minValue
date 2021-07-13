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
	int minValue = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i];
		}
	}
	cout << endl << "Min: " << minValue;
}