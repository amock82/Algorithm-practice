#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*

bool cmp(vector<int> a, vector<int> b)
{
	if (a[1] == b[1])
		return a[0] < b[0];
	else
		return a[1] < b[1];
}

int main()
{
	int N;
	vector<vector<int>> A;

	int cnt = 0;
	int time = 0;

	cin >> N;

	A.resize(N);
	
	for (int i = 0; i < A.size(); i++)
	{
		A[i].resize(2);
		cin >> A[i][0] >> A[i][1];
	}

	sort(A.begin(), A.end(), cmp);

	for (int i = 0; i < A.size(); i++)
	{
		if (A[i][0] >= time)
		{
			time = A[i][1];
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
*/