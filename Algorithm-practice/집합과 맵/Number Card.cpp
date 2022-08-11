/*
https://www.acmicpc.net/problem/10815

[����] 
���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�.
����̴� ���� ī�� N���� ������ �ִ�. ���� M���� �־����� ��, �� ���� �����ִ� ���� ī�带 ����̰� ������ �ִ��� �ƴ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

[�Է�]
ù° �ٿ� ����̰� ������ �ִ� ���� ī���� ���� N(1 �� N �� 500,000)�� �־�����. 
��° �ٿ��� ���� ī�忡 �����ִ� ������ �־�����. 
���� ī�忡 �����ִ� ���� -10,000,000���� ũ�ų� ����, 10,000,000���� �۰ų� ����. �� ���� ī�忡 ���� ���� �����ִ� ���� ����.

��° �ٿ��� M(1 �� M �� 500,000)�� �־�����.
��° �ٿ��� ����̰� ������ �ִ� ���� ī������ �ƴ����� ���ؾ� �� M���� ������ �־�����, �� ���� �������� ���еǾ��� �ִ�. 
�� ���� -10,000,000���� ũ�ų� ����, 10,000,000���� �۰ų� ����

[���]
ù° �ٿ� �Է����� �־��� M���� ���� ���ؼ�, �� ���� ���� ���� ī�带 ����̰� ������ ������ 1��, �ƴϸ� 0�� �������� ������ ����Ѵ�.
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;								// ������ �ִ� ī���� ��, Ȯ���ؾ��ϴ� ī���� ��
	vector<int> inputN, inputM;				// ���� ī�忡 ���� ��, Ȯ���Ϸ��� ī�忡 ���� ��
	bool find = false;						// ��ġ�ϴ� ī�带 ã�Ҵ��� üũ�ϴ� ����

	// N�� inputN�� �Է¹���
	cin >> N;
	inputN.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> inputN[i];
	}

	// M�� inputM�� �Է¹���
	cin >> M;
	inputM.resize(M);

	for (int i = 0; i < M; i++)
		cin >> inputM[i];

	// inputN�� ����
	sort(inputN.begin(), inputN.end());

	// inputM�� ũ�⸸ŭ �ݺ� (�̺�Ž�� �˰���)
	for (int i = 0; i < M; i++)
	{
		int start = 0;
		int end = N - 1;

		while (start <= end)
		{
			int mid = (end + start) / 2;

			if (inputN[mid] == inputM[i])
			{	
				// Ž���Ͽ� �߰��ϸ� 1���
				cout << "1 ";
				find = true;
				break;
			}
			else if (inputN[mid] < inputM[i])
			{
				start = mid + 1;
			}
			else if (inputN[mid] > inputM[i])
			{
				end = mid - 1;
			}
		}

		if (find == false)
		{
			// Ž����� �߰����� ���ϸ� 0 ����
			cout << "0 ";
		}
		else
			find = false;
	}

	return 0;
}
*/