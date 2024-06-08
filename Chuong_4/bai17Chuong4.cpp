#include<bits/stdc++.h>

#define size 100

using namespace std;

int A[size] , B[size] , X[size] , ans[size];
int n  , best = INT_MAX;
void getArray();
void cost();
void Try(int i);
void show();

int main()
{
	getArray();
	Try(1);
	show();
}

void getArray()
{
	cin >> n;
	for(int i = 1; i <= n; i++)		
	{
		cin>>A[i];
	}	
	for(int i = 1; i <= n; i++)
	{
		cin>>B[i];
	}	
}

void cost()
{
	int Ta = 0, Tb = 0;
	for(int i = 1; i <= n; i++)
	{
		if(!X[i]) 
			Ta += A[i];
		else 
			Tb += B[i];	
	}
	if(Ta>Tb) 
		Tb = Ta;
	if(best > Tb)
	{
		best = Tb;
		for(int i = 1; i <= n; i++)
			ans[i] = X[i];
	}
}		

void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		X[i] = j;
		if(i == n)
			cost();
		else
			Try(i+1);
	}
}

void show()
{
	cout << "tong thoi gian toi uu : " << best << "\n";
	for(int i = 1; i <= n; i++)
	{
		if(!ans[i]) 	
			cout <<"cong viec thu : " << i 
				 <<" do "<<"May A lam \n";
		else		 	
			cout << "cong viec thu : " << i
			 	 << " do " <<"May B lam \n";
	}
}


