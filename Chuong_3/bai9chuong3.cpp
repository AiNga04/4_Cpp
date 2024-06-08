#include<bits/stdc++.h>

#define SIZE 100

using namespace std;

void nhap(int arr[], int n);
void xuat(int arr[], int n);
void swap(int& a, int& b);
void sapXep(int arr[], int n);
int timMax(int arr[], int n);
int timMin(int arr[], int n);
int timK(int arr[], int n, int x);
void chenX(int arr[], int n, int x, int k);

int main()
{
	int n, x;
	cout << "Nhap n:\n";
	cin >> n;
	int arr[SIZE];
	cout << "Nhap " << n << " phan tu mang:\n";
	nhap(arr, n);
	cout << "Nhap x:\n";
	cin >> x;
	cout << "Mang:\n";
	xuat(arr, n);
	sapXep(arr, n);
	cout << "Mang giam:\n";
	xuat(arr, n);
	int k = timK(arr, n, x);
	chenX(arr, n, x, k);
	cout <<"Mang da chen:\n";
	xuat(arr, n + 1);	
}

void nhap(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void xuat(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void sapXep(int arr[], int n)
{
	bool isSwapped = true;
	int i = n - 1;
	while(i > 0)
	{
		isSwapped = false;
		for(int j = 0; j < i; j++)
		{
			if(arr[j] < arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				isSwapped = true;
			}
		}
		if(isSwapped == false)
		{
			break;
		}
		else
		{
			i--;
		}
	}
}

int timMax(int arr[], int n)
{
	int max = arr[0];
	for(int i = 1;i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int timMin(int arr[], int n)
{
	int min = arr[0];
	for(int i = 1;i < n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int timK(int arr[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(x > timMax(arr, n))
		{
			return 0;
		}
		else if(x < timMin(arr, n))
		{
			return n;
		}
		if(arr[i] >= x && arr[i + 1] <= x)
		{
			return i + 1;
		}			
	}
}

void chenX(int arr[], int n, int x, int k)
{
	for(int i = n; i >= k; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[k] = x;
}

