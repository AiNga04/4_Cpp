#include <iostream>

#define SIZE 100

using namespace std;

void nhapMang(int arr[], int& n);
void xuatMang(int arr[], int m, int n);
void ghepMang(int arr1[], int arr2[], int arr[], int m, int n);

int main()
{
    int m, n;
    cout << "nhap m, n:\n";
    cin >> m >> n;
    int arr1[SIZE];
    int arr2[SIZE];
    int arr[2*SIZE];
    nhapMang(arr1, m);
    nhapMang(arr2, n);
    ghepMang(arr1, arr2, arr, m, n);
    xuatMang(arr, m, n);
    
}

void nhapMang(int arr[], int& n)
{
    cout << "nhap " << n << " phan tu mang: \n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void xuatMang(int arr[], int m, int n)
{
    for(int i = 0; i < m + n; i++)
    {
        cout << arr[i] << " ";
    }
}
void ghepMang(int arr1[], int arr2[], int arr[], int m, int n)
{
    int i = 0, j = 0, k = 0;
	while(i < m && j < n)
	{
		arr[k++] = arr1[i++];
		arr[k++] = arr2[j++];		
	}
	while(i < m)
		arr[k++] = arr1[i++];	
	while(j < n)	
		arr[k++] = arr2[j++];
}

