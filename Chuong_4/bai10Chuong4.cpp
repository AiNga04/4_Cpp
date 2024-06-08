#include<bits/stdc++.h>

#define SIZE 1000

using namespace std;

void getArray(int arr[], int n);
int min(int a, int b);
void timX(int arr[], int n);

int main(){
	int n;
	int arr[SIZE];
	cout << "Nhap n:\n";
	cin >> n;
	getArray(arr, n);
	timX(arr, n);
	return 0;

}


void getArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int min(int a, int b)
{
	return(a < b) ? a : b;
}

void timX(int arr[], int n)
{
	int x = 0;
	int count = 0;
	int nho = 0;
	int result = 0;	
	for(int i =0; i < n; i++)
	{
		x = arr[i];
		for(int j = 0; j < n; j++)
		{
			if(arr[j] == x)
			{
				count++;
			}
		}
		if(count > nho)
		{
			result = x;
			nho = count;
			count =0;
		}
		else if(count == nho)
		{
			result = min(result, x);
			count = 0;
		}
		else
			count = 0;
	}
	cout << result << endl;
}


