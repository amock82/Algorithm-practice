#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

/*
int main()
{
	string form;
	
	int start = 0, end;
	int sum = 0;
	bool find = false;

	vector<int> num;
	vector<char> sign;

	cin >> form;

	sign.push_back('+');

	for (int i = 0; i < form.size(); i++)
	{
		if (form[i] == '+' || form[i] == '-' || i == form.size() - 1)
		{
			string temp;
			
			if (i == form.size() - 1)
			{
				i++;
			}
			end = i;

			temp = form.substr(start, end - start);

			num.push_back(stoi(temp, nullptr, 10));
			sign.push_back(form[i]);

			start = i + 1;
		}
	}

	for (int i = 0; i < num.size(); i++)
	{
		if (sign[i] == '-')
		{
			find = true;
		}

		if (find == true)
		{
			sum -= num[i];
		}
		else
			sum += num[i];
	}

	cout << sum;

	return 0;
}
*/