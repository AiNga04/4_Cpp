#include<iostream>

#define SIZE 50

using namespace std;

int arr[SIZE];

void xuat(int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void lietKeNP(int n)
{
	int i;
	do
	{
		i = n - 1;
		xuat(n);
		while(i >= 0 && arr[i] == 1)
		{
			arr[i] = 0;
			i--;
		}
		if(i >= 0)
			arr[i] = 1;
	}while(i >= 0);
}

int main()
{
	int n;
	cin >> n;
	lietKeNP(n);
 	return 0;
}

