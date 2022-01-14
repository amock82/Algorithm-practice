/*
#include <iostream>

using namespace std;

int fibo[41][2] = { {1, 0}, {0, 1}, {0, 0}, };

int* fibonacci(int n) {
    if (fibo[n][0] == 0 && fibo[n][1] == 0)
    {
        fibo[n][0] = fibonacci(n - 1)[0] + fibonacci(n - 2)[0];
        fibo[n][1] = fibonacci(n - 1)[1] + fibonacci(n - 2)[1];
    }

    return fibo[n];
}

int main()
{
    int T;      // 테스트 케이스 개수
    int *N;      // 테스트 케이스의 변수

    cin >> T;

    N = new int[T];

    fibonacci(40);

    for (int i = 0; i < T; i++)
    {
        cin >> N[i];
    }

    for (int i = 0; i < T; i++)
    {
        cout << fibo[N[i]][0] << " " << fibo[N[i]][1] << endl;
    }

    return 0;
}
*/