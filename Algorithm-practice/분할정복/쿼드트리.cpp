#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
string paper[64];

int Cut(int hor, int ver, int N)
{
	for (int i = ver; i < ver + N && N > 1; i++)
	{
		for (int j = hor; j < hor + N; j++)
		{
			if (paper[i][j] != paper[ver][hor])
			{
				cout << "(";
				Cut(hor, ver, N / 2);
				Cut(hor + N / 2, ver, N / 2);
				Cut(hor, ver + N / 2, N / 2);
				Cut(hor + N / 2, ver + N / 2, N / 2);
				cout << ")";

				return 0;
			}
		}
	}

	cout << paper[ver][hor];
	return 0;
}

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> paper[i];
	}

	Cut(0, 0, N);

	return 0;
}
*/