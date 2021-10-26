#include <iostream>
#include <vector>

using namespace std;

long long int A, B, C;

long long int Remainder(int x, int y)
{
	if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	
	if (y % 2 > 0)
		return Remainder(x, y - 1) * x;
	
	long long int half = Remainder(x, y / 2);

	half %= C;

	return (half * half) % C;
}

int main()
{
	cin >> A >> B >> C;

	cout << Remainder(A, B) % C << endl;

	return 0;
}