#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n)
{
	if(n == 0 || n == 1)
		return n;
	else
	{
		int a = 0, b = 1, c;
		for(int i = 2; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

int main()
{
	int n;
	// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,…
	cin >> n;
	cout << fibonacci(n) << endl;
}
