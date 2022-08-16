/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Search(vector<string> temp, int x, int y)
{
	int cnt = 0;
	int min = 0;

	for (int i = y; i < y + 8; i++)
	{
		for (int j = x; j < x + 8; j++)
		{
			if (j % 2 == i % 2)
			{
				if (temp[i][j] == 'W')
					cnt++;
			}
			else
			{
				if (temp[i][j] == 'B')
					cnt++;
			}
		}
	}

	min = cnt;
	cnt = 0;

	for (int i = y; i < y + 8; i++)
	{
		for (int j = x; j < x + 8; j++)
		{
			if (j % 2 == i % 2)
			{
				if (temp[i][j] == 'B')
					cnt++;
			}
			else
			{
				if (temp[i][j] == 'W')
					cnt++;
			}
		}
	}

	if (min > cnt)
		min = cnt;

	return min;
}

int Check(vector<string> input, int width, int height)
{
	vector<string> temp = input;
	int min = 64;

	for (int i = 0; i < height - 7; i++)
	{
		for (int j = 0; j < width - 7; j++)
		{
			int k = Search(temp, j, i);

			if (k < min)
				min = k;
		}
	}

	return min;
}


int main()
{
	int N, M;
	vector<string> input;

	cin >> N >> M;

	input.resize(N);

	for (int i = 0; i < N; i++)
	{
		string temp;

		cin >> temp;

		input[i] = temp;
	}

	cout << Check(input, M, N);


	return 0;
}
*/