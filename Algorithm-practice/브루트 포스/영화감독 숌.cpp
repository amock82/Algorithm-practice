#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

bool Check(int n)
{
	string temp = to_string(n);
	int cnt = 0;

	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == '6')
			cnt++;
		else
			cnt = 0;

		if (cnt == 3)
		{
			return true;
		}
	}

	return false;
}

int Search(int N)
{
	int cnt = 0;

	for (int i = 666; ; i++)
	{
		if (Check(i) == true)
			cnt++;

		if (cnt == N)
		{
			return i;
		}
	}
}

/*
int main()
{
	int N;

	cin >> N;

	cout << Search(N);

	return 0;
}
*/