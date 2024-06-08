#include <bits/stdc++.h>

using namespace std;

void sum(int n)
{
	long long s = 0;
	while(n != 0)
	{
		s += n*(n + 1)/2;
		n--;
	}
	cout << s << endl;
}

int main()
{
	int n;
	cin >> n;
	sum(n);
	return 0;
}
