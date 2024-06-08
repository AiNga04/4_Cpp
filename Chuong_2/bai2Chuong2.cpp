#include <iostream>

#define SIZE 100

using namespace std;

void nhapMang(int arr[], int n);
bool timKiem(int arr[], int n, int x);

int main()
{
    int n, x;
    cout << "nhap n: \n";
    cin >> n;
    cout << "nhap x can tim: \n";
    cin >> x;
    int arr[SIZE];
    nhapMang(arr, n);
    if(timKiem(arr, n, x))
        cout << "tim thay" << endl;
    else
        cout << "khong tim thay" << endl;
    
    
}

void nhapMang(int arr[], int n)
{
    cout << "nhap " << n << " phan tu mang:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

bool timKiem(int arr[], int n, int x)
{
    int l = 0,r = n-1;
	while(l <= r)
	{
		int m = l+(r-l)/2;
		if(arr[m] == x)
			return true;
		else if(arr[m] < x)
			l = m + 1;
		else
			r = m - 1;			
	}
	return false;
}
