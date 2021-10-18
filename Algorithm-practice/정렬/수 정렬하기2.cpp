#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& value)
{
	
}

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