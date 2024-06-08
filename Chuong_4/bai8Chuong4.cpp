#include<bits/stdc++.h>

#define SIZE 1000

using namespace std;

void getArray(int arr[], int n);
bool isPrime(int x);
int maxArray(int arr[], int n);
void minPrimeArray(int arr[], int n);

int main(){
	int n;
	int arr[SIZE];
	cout << "Nhap n:\n";
	cin >> n;
	getArray(arr, n);
	minPrimeArray(arr, n);
	return 0;

}

void getArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

bool isPrime(int x)
{
	if(x < 2)
		return false;
	else
	{
		int count = 0;
		for(int i = 2; i*i <= x; i++)
		{
			if(x % i == 0)
				count++;
		}
		return !count;
	}	
}

int maxArray(int arr[], int n)
{
	int max = arr[0];
	for(int i = 0; i < n;i++)
	{
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}

void minPrimeArray(int arr[], int n)
{
	int x = maxArray(arr, n);
	int min = x;
	for(int i = 0; i < n; i++)
	{
		if(isPrime(arr[i]))
		{
			if(arr[i] < min)
			{
				min = arr[i];
			}
		}
	}
	(min == x) ? cout << "Mang khong co so nguyen to: "
			   : cout << "So nguyen to nho nhat: " << min << endl;	
}


