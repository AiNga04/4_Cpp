#include<iostream>
#include<cmath>

#define SIZE 10000

using namespace std;

int arr[SIZE];

void getArray(int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int maxChan(int n)
{
	int max = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0 && arr[i] > max) 
		{
			max = arr[i];
		}
	}
	return max;
}

void timMinLe(int n)
{
	int min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 != 0 && arr[i] < min && arr[i] > maxChan(n))
		{
			min = arr[i];
		}
	}
	(min == INT_MAX) ? cout << "NO FOUND" : cout << min;
}

int main()
{
	int n;
	cin >> n;
	getArray(n);
	timMinLe(n);
 	return 0;
}

