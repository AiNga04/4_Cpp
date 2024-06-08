#include <bits/stdc++.h>

using namespace std;

void sum(int n)
{
	double factorial = 1;
	double s = 0;
	for(int i = 1; i <= n; i++)
	{
		factorial *= i;
		s += factorial;
	}
	cout << s << endl;
}

int main()
{
    int n;
    cin >> n;
    sum(n);
}
