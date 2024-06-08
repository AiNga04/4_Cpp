#include<iostream>

using namespace std;

int n , k , A[100] , ok ;

void ktao()
{
	cin >> n >> k ;
	for(int i = 1; i <= k; i++)
		A[i] = 1;
}

void sinh()
{
	int i = k;
	while(i >= 1 && A[i] == n) i--;
	if(!i)
		ok = 0;
	else
	{
		A[i]++;
		for(int j = i + 1; j <= k; j++)
			A[j] = 1;
	}	
}

bool check()
{
	for(int i = 1; i <= k; i++)
		for(int j = i + 1; j <= k; j++)
			if(A[i] == A[j])
				return false;
	return true;			
}
int main()
{
	ktao();
	ok = 1;
	int cnt = 0;
	while(ok)
	{
		if(check())
		{
			for(int i = 1; i <= k; i++)
				cout << A[i] << " ";
			cnt++;	
			cout << "\n";
		}
		sinh();
	}
}