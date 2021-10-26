#include <iostream>
#include <vector>

using namespace std;

/*
int paper[128][128];
int num[2] = { 0, 0 };

int Cut(int hor, int ver, int N)
{
	for (int i = ver; i < ver + N && N > 1; i++)
	{
		for (int j = hor; j < hor + N; j++)
		{
			if (paper[i][j] != paper[ver][hor])
			{
				Cut(hor, ver, N / 2);
				Cut(hor + N / 2, ver, N / 2);
				Cut(hor, ver + N / 2, N / 2);
				Cut(hor + N / 2, ver + N / 2, N / 2);

				return 0;
			}
		}
	}

	num[paper[ver][hor]] ++;
	return 0;
}

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> paper[i][j];
		}
	}

	Cut(0, 0, N);

	cout << num[0] << endl << num[1] << endl;

	return 0;
}
*/
