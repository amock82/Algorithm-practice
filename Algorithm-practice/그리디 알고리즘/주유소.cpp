#include <iostream>

using namespace std;

/*
int main()
{
	// 2 <= N <= 100,000
	// 1 <= distance รัวี <= 1,000,000,000
	// 1 <= cost <= 1,000,000,000
	int N, min;
	unsigned long long sum = 0;

	int* cost;
	int* distance;

	cin >> N;

	cost = new int[N];
	distance = new int[N - 1];

	for (int i = 0; i < N - 1; i++)
	{
		cin >> distance[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> cost[i];
	}

	min = cost[0];

	for (int i = 0; i < N - 1; i++)
	{
		if (min > cost[i])
			min = cost[i];

		sum += (unsigned long long)distance[i] * min;
	}

	cout << sum;

	return 0;
}
*/