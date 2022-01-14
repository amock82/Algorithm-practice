// 백준 문제 9184번
#include <iostream>

using namespace std;

int w[21][21][21];

int Functuin(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20)
	{
		return Functuin(20, 20, 20);
	}
	else if (w[a][b][c] != 0)
	{
		return w[a][b][c];
	}
	else if (a < b && b < c)
	{
		w[a][b][c] = Functuin(a, b, c - 1) + Functuin(a, b - 1, c - 1) - Functuin(a, b - 1, c);
	}
	else
	{
			w[a][b][c] = Functuin(a - 1, b, c) + Functuin(a - 1, b - 1, c) + Functuin(a - 1, b, c - 1) - Functuin(a - 1, b - 1, c - 1);
	}

	return w[a][b][c];
}

int main()
{
	while (1)
	{
		int a, b, c;

		scanf_s("%d %d %d", &a, &b, &c);

		if (a == -1 && b == -1 && c == -1) 
			break;

		printf("w(%d, %d, %d) = %d\n", a, b, c, Functuin(a, b, c));
	}

	return 0;
}