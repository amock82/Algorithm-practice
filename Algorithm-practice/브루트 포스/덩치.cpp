#include <iostream>
#include <vector>

using namespace std;

/*
int main()
{
	int N;
	vector<vector<int>> data;
	vector<int> grade;
	int w, h;

	cin >> N;

	data.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> w >> h;
	
		data[i].push_back(w);
		data[i].push_back(h);
	}

	for (int i = 0; i < N; i++)
	{
		int cnt = 1;

		for (int j = 0; j < N; j++)
		{
			if (i != j)
			{
				if (data[i][0] < data[j][0] && data[i][1] < data[j][1])
				{
					cnt++;
				}
			}
		}

		grade.push_back(cnt);
	}

	

	return 0;
}
*/