#include<iostream>

using namespace std;

int count (long long n)
{
	int res = 0;
	for(int i = 5; i <= n; i += 5)
	{
		int tmp = i;
		while(tmp % 5 == 0)
		{
			tmp /= 5;
			res ++;
		}
	}
	return res;
}
int main()
{
	long long n;
	cin >> n;
	cout << count(n);
	return 0;
}
