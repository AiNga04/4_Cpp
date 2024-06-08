#include<bits/stdc++.h>

#define SIZE 1000

using namespace std;

void getArray(int arr[], int n);
int timUCLN(int n, int m);
void timUCLNArray(int arr[], int n);

int main(){
	int n;
	int arr[SIZE];
	cout << "Nhap n:\n";
	cin >> n;
	getArray(arr, n);
	timUCLNArray(arr, n);
	return 0;

}

void getArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int timUCLN(int n, int m)
{
    while(n != m)
    {
        if(n > m)
            n = n -m;
        else
            m = m - n;
    }
    return n;
}

void timUCLNArray(int arr[], int n)
{
	int a = 0;
	for(int i = 0; i < n - 1; i++)
	{
		a = timUCLN(arr[i], arr[i + 1]);
		arr[i + 1] = a;		
	}
	cout << a << endl;
}


