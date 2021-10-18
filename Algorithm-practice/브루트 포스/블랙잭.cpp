#include <iostream>

using namespace std;

/*
int main()
{
	int num, max;
	int* value;
	int sum = 0;

	cin >> num >> max;

	value = new int[num];

	for (int i = 0; i < num; i++)
	{
		cin >> value[i];
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			for (int k = j + 1; k < num; k++)
			{
				int sumTemp = value[i] + value[j] + value[k];

				if (sumTemp <= max && sum < sumTemp)
					sum = sumTemp;
			}
		}
	}

	cout << sum;

	return 0;
}
*/