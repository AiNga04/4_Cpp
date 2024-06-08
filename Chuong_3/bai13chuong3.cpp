#include<bits/stdc++.h>

#define s 100

using namespace std;

int A[s] , n , cnt = 0;

void nhap()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
}
void sort()
{
	for(int i = 0; i < n - 1; i++)
	{
		int a = A[n-1];
		int idx = n - 1;
		for(int j = i + 1; j < n; j++)
		{
			if(A[j] <= a)
			{
				a = A[j];
				idx = j;
			}
		}
		if(a < A[i])
		{	
			++cnt;
			swap(A[i],A[idx]);
		}
	}
}
void xuat()
{
	for(int i = 0; i < n; i++) 
		cout << A[i] << " ";
}

int main()
{
	nhap();
	sort();
	cout<< cnt <<"\n";
	xuat();
	return 0;	
}
