#include<iostream>

#define SIZE 50

using namespace std;

int arr[SIZE] = {0};

void xuat(int k)
{
	for(int i = 0 ; i < k; i ++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void latNguoc(int a, int b)
{
	while(a < b)
	{
		swap(arr[a], arr[b]);
		a++;
		b--;
	}
}

void sinhHV(int n)
{
	for(int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	xuat(n);
	while(true)
	{
		int k = n - 2;
		while(k >= 0 && arr[k] > arr[k + 1])
		{
			k--;
		}
		if(k < 0)
			break;
		int m = n - 1;
		while(arr[m] < arr[k])
		{
			m--;
		}
		swap(arr[m], arr[k]);
		latNguoc(k + 1, n - 1);
		xuat(n);
	}
}

int main()
{
	int n;
	cin >> n;
	sinhHV(n);
 	return 0;
}
