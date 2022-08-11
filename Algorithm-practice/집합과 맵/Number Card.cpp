/*
https://www.acmicpc.net/problem/10815

[문제] 
숫자 카드는 정수 하나가 적혀져 있는 카드이다.
상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를 구하는 프로그램을 작성하시오.

[입력]
첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 
둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 
숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다. 두 숫자 카드에 같은 수가 적혀있는 경우는 없다.

셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다.
넷째 줄에는 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 
이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다

[출력]
첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 가지고 있으면 1을, 아니면 0을 공백으로 구분해 출력한다.
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

	int N, M;								// 가지고 있는 카드의 수, 확인해야하는 카드의 수
	vector<int> inputN, inputM;				// 가진 카드에 적힌 수, 확인하려는 카드에 적힌 수
	bool find = false;						// 일치하는 카드를 찾았는지 체크하는 변수

	// N과 inputN을 입력받음
	cin >> N;
	inputN.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> inputN[i];
	}

	// M과 inputM을 입력받음
	cin >> M;
	inputM.resize(M);

	for (int i = 0; i < M; i++)
		cin >> inputM[i];

	// inputN을 정렬
	sort(inputN.begin(), inputN.end());

	// inputM의 크기만큼 반복 (이분탐색 알고리즘)
	for (int i = 0; i < M; i++)
	{
		int start = 0;
		int end = N - 1;

		while (start <= end)
		{
			int mid = (end + start) / 2;

			if (inputN[mid] == inputM[i])
			{	
				// 탐색하여 발견하면 1출력
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
			// 탐색결과 발견하지 못하면 0 툴력
			cout << "0 ";
		}
		else
			find = false;
	}

	return 0;
}
*/