#include<iostream>
using namespace std;

void sinhNP(string str, int n, int x)
{
	int cnt = 0;
	if(str.size() == n)
	{
		for(int i = 0; i < str.size() - 1; i++)
		{
			if(str[i] == '0' && str[i + 1] == '1')
				cnt++;
		}
		if(cnt == 2)
			cout << str << endl;
		return;
	}
	sinhNP(str + "0", n, x);
	sinhNP(str + "1", n, x);
}

int main()
{
	int n;
	cin >> n;
	sinhNP("", n, 2);
 	return 0;
}

