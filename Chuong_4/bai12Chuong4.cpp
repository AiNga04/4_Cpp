#include<bits/stdc++.h>

using namespace std;

int X[100],n;
int A[100];
void inp();
void in();
void Try(int i);

int main()
{
	inp();
	Try(1);
}

void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> A[i]; 
}
void in()
{
	cout << "{ ";
	for(int i = 1;i<=n;i++)
	{
		if(X[i])
			cout << A[i] << " ";
	}
	cout << "}"<<"\n";	
}
void Try(int i)
{
	for(int j=0 ; j <= 1 ; j ++ )
	{
		X[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}
