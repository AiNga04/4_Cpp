#include<bits/stdc++.h>

#define SIZE 1000

using namespace std;

int arr[SIZE];

void getArray(int n);
int sumArray(int n);

int main(){
	int n;
	cout << "Nhap n:\n";
	cin >> n;
	getArray(n);
	cout << "Sum: " << sumArray(n);
	return 0;

}

void getArray(int n)
{
	for(int i = 0; i < n ; i++)
	{
		cin >> arr[i];
	}
}

int sumArray(int n)
{
	if(n == 1)
		return arr[0];
	else
	{
		return arr[n - 1] + sumArray(n - 1);			
	}
}
