#include<bits/stdc++.h>

#define SIZE 1000

using namespace std;

void getArray(int arr[], int n);
int banarySearch(int arr[],int left, int right, int x);

int main(){
	int n, x;
	cout << "Nhap n:\n";
	cin >> n;
	int arr[SIZE];
	getArray(arr,n);
	cout << "Nhap x:\n";
	cin >> x;
	int result = banarySearch(arr,0,n - 1,x);
	(result == -1) ? cout << "Khong tim thay x trong mang: "
				   : cout << "Vi tri x trong mang: " << result << endl;	

}

void getArray(int arr[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		cin >> arr[i];
	}
}

int banarySearch(int arr[],int left, int right, int x)
{
	if(right >= left)
	{
		int mid = left + (right - left) / 2;
		if(arr[mid] == x)
			return mid;
		if(mid > x)
			return banarySearch(arr, left, mid - 1, x );
		return banarySearch(arr,mid + 1, right, x);		
	}
	return -1;
}

