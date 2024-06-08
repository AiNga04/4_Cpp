#include<iostream>

#define SIZE 50

using namespace std;

int arr[SIZE] = {0}; 

void xuat(int n)
{
	cout << "{ ";
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 1)
		{
			cout << i << " ";
		}
	}
	cout << "}" << endl;
}

void sinhTapCon(int n)
{
	int i;
	do
	{
		i = 0;
		xuat(n);
		while(i <= n - 1 && arr[i] == 1)
		{
			arr[i] = 0;
			i++;
		}
		if(i <= n - 1)
			arr[i] = 1;
	}while(i <= n - 1);
}

int main()
{
	int n;
	cin >> n;
	sinhTapCon(n);
 	return 0;
}

