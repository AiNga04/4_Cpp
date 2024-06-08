#include<iostream>
using namespace std;

int main()
{
	int n; int count = 0;
	cin >> n;
	for(int i = 31; i >= 0; i--)
	{
		if(n & (1 << i))
			count++;
	}
	cout << count;
 	return 0;
}

