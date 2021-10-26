#include <iostream>
#include <vector>

using namespace std;

/*
vector<vector<int>> paper;
int num[3] = { 0 };

void Cut(int hor, int ver, int N)
{
	for (int i = ver; i < ver + N; i++)
	{
		for (int j = hor; j < hor + N; j++)
		{
			if (paper[i][j] != paper[ver][hor])
			{
				Cut(hor, ver, N / 3);
				Cut(hor + N / 3, ver, N / 3);
				Cut(hor + N * 2 / 3, ver, N / 3);
				Cut(hor, ver + N / 3, N / 3);
				Cut(hor + N / 3, ver + N / 3, N / 3);
				Cut(hor + N * 2 / 3, ver + N / 3, N / 3);
				Cut(hor, ver + N * 2 / 3, N / 3);
				Cut(hor + N / 3, ver + N * 2 / 3, N / 3);
				Cut(hor + N * 2 / 3, ver + N * 2 / 3, N / 3);

				return;
			}
		}
	}

	num[paper[ver][hor] + 1] ++;
}

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		vector<int> arr;
		for (int j = 0; j < N; j++)
		{
			int a;
			cin >> a;
			arr.push_back(a);
		}
		paper.push_back(arr);
	}

	Cut(0, 0, N);

	cout << num[0] << endl << num[1] << endl << num[2] << endl;

	return 0;
}

*/