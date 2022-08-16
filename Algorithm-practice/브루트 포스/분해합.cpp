#include <iostream>
#include <math.h>

/*
using namespace std;

int Count(int N)
{
	int cnt = 0;

	for (int i = N; i > 0;)
	{
		cnt++;
		i /= 10;
	}

	return cnt;
}

int main()
{
	int N;
	int sum;
	bool find = false;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		sum = 0;

		for (int j = Count(i); j >= 1; j--)
		{
			sum += (i % (int)pow(10, j)) / (int)pow(10, j - 1);
		}

		sum += i;

		if (sum == N)
		{
			cout << i;
			find = true;

			break;
		}
	}

	if (find == false)
	{
		cout << 0;
	}

	return 0;
}
*/