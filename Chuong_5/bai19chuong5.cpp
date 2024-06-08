#include<bits/stdc++.h>

using namespace std;

int n, A[100], ok, cnt;

void inp() 
{
	cin >> n;
	A[1] = n;
	cnt = 1;
}

void sinh() 
{
	int i = cnt;
	while(i >= 1 && A[i] == 1) i--;
	if(i == 0) ok = 0;
	else 
	{
		A[i]--;
		int sum = cnt - i + 1;
		int d = sum / A[i] , j = i + 1;
		while(j <= i + d)
		{
			A[j] = A[i];
			j++;
		}
		if(sum % A[i] != 0)
		{
			A[j] = sum % A[i];
			cnt = j;
		}
		else cnt = j - 1;
	}
}
int main() 
{
	inp();
	ok = 1;
	while(ok)
	{
		for(int i = 1; i <= cnt ; i++)
			cout << A[i] << " ";
		cout << "\n";
		sinh();
	}
}

