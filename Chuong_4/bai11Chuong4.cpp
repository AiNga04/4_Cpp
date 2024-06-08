#include<bits/stdc++.h>

using namespace std;

void binary(string str, int n)
{
	if(n == 0)
		cout << str << endl;
	else
	{
		binary(str + "0", n - 1);
		binary(str + "1", n - 1);		
	}
}

int main()
{
	int n;
	cin >> n;
	binary("", n);
	return 0;
}


