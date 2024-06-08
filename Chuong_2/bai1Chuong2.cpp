#include <iostream>

#define SIZE 100

using namespace std;

int guardsSearch(int arr[], int n, int x);
void showResult(int arr[], int index);

int main()
{
    int n, x;
    cout << "nhap n: \n";
    cin >> n;
    cout << "nhap x can tim: \n";
    cin >> x;
    int arr[SIZE];
    cout << "nhap " << n << " phan tu mang: \n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int xIndex = guardsSearch(arr, n, x);
    showResult(arr, xIndex);
}

int guardsSearch(int arr[], int n, int x)
{
    int i = 0;
    arr[n] = x;
    while(arr[i] != x)
        i++;
    if(i < n)
        return i;
    else
        return -1;
}

void showResult(int arr[], int xIndex)
{
    if(xIndex == -1)
        cout << "khong tim thay x:\n";
    else
        cout << "vi tri cua x: " << xIndex << endl;
}

