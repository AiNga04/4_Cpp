#include<bits/stdc++.h>

#define M 10

using namespace std;

int n, dem = 0;
int a[M][M] = {0};
int X[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int Y[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
//kiem tra vi tri (x, y) co thuoc ban co
bool check(int x, int y)
{
	return (x >= 0 && x < n && y >= 0 && y < n);
}
//ham xuat duong di
void show(int a[][M])
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] < 10)
				cout << " " << a[i][j] << " ";
			else
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
//ham quay lui de tim duong di
void diTuan(int x, int y)
{
	dem++;
	a[x][y] = dem;
	if(dem == n*n)
	{ 
		show(a);
		exit(0);
	}
	for(int i = 0; i < 8; i++)
	{
		int xnext = x + X[i];
		int ynext = y + Y[i];
		if(check(xnext, ynext) && a[xnext][ynext] == 0)
			diTuan(xnext, ynext);
	}
	dem--;
	a[x][y] = 0;	
}


int main()
{
	int x, y;
	cin >> n;
	cin >> x >> y;
	diTuan(x, y);	
	return 0;
}


