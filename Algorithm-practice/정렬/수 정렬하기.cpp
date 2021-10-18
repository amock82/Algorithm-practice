#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& value)
{
	for (int i = 1; i < value.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (value[i] < value[j])
			{
				int temp = value[i];
				value[i] = value[j];
				value[j] = temp;
			}
		}
	}
}

/*
int main()
{
	int N;
	vector<int> input;

	cin >> N;

	input.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
	}

	sort(input);

	for (int i = 0; i < N; i++)
	{
		cout << input[i] << endl;
	}

	return 0;
}
*/