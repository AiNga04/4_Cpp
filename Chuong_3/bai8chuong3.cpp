#include <bits/stdc++.h>

using namespace std;

void timN(double a)
{
	int n = 1;
	double s = a;
	while(s >= 0)
	{
		s -= 1.0/n;
		n++;
	}
	cout << n - 1 << endl;
}

int main()
{
	double a;
	cin >> a;
	timN(a);
}
