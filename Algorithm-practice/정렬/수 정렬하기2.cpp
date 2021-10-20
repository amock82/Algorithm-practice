// 실패(시간초과)

/*
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void Exchange(vector<int>& value, int n, int p)
{
	int shift = value[p];
	int parent = p;
	int largeChild;
	int find = false;

	for (; parent * 2 < n && !find;)
	{
		if (n > parent * 2 + 1 && value[parent * 2] < value[parent * 2 + 1])
		{
			largeChild = parent * 2 + 1;
		}
		else
			largeChild = parent * 2;

		if (shift < value[largeChild])
		{
			value[parent] = value[largeChild];
			parent = largeChild;
		}
		else
			find = true;
	}

	value[parent] = shift;
}

void MakeHeap(vector<int>& value)
{
	for (int i = value.size() / 2; i >= 1; i--)
	{
		Exchange(value, value.size(), i);
	}
}

void RootBack(vector<int>& value, int n)
{
	int temp = value[1];
	value[1] = value[n];
	value[n] = temp;

	Exchange(value, n, 1);
}

void Delete(vector<int>& value)
{
	for (int i = value.size() - 1; i >= 1; i--)
	{
		RootBack(value, i);
	}
}

void HeapSort(vector<int>& value)
{
	MakeHeap(value);

	Delete(value);
}

int main()
{
	int N;
	vector<int> input;

	cin >> N;

	input.resize(N + 1);

	for (int i = 1; i < N + 1; i++)
	{
		cin >> input[i];
	}

	HeapSort(input);

	for (int i = 1; i < N + 1; i++)
	{
		cout << input[i] << endl;
	}

	return 0;
}
*/