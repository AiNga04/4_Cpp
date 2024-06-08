#include<bits/stdc++.h>

#define SIZE 1000

using namespace std;

int arr[SIZE];

void getArray(int n);
int maxArray(int n);

int main(){
	int n;
	cout << "Nhap n:\n";
	cin >> n;
	getArray(n);
	cout << "Max: " << maxArray(n);
	return 0;

}

void getArray(int n)
{
	for(int i = 0; i < n ; i++)
	{
		cin >> arr[i];
	}
}

int maxArray(int n)
{
	if(n == 1)
		return arr[0];
	else
	{
		int x = maxArray(n - 1);
		if(arr[n - 1] > x)
			return arr[n - 1];
		else
			return x;			
	}
}


