#include<bits/stdc++.h>

#define SIZE 1000001

using namespace std;

int F[SIZE];

void sieve()
{
	fill(F, F + SIZE + 1, 1);
	F[0] = F[1] = 0;
	for(int i = 2; i <= 1000; i++)
		if(F[i])
			for(int j = i*i; j <= SIZE - 1; j += i)
				F[j] = 0;		
}

int main()
{
	int n;
	cin >> n;
	sieve();
	for(int i = 2; i <= n; i++)
		if(F[i])
			cout << i << " ";		
}
