#include <iostream>

#define SIZE 100

using namespace std;

void nhapMang(int arr[], int& n);
void xuatMang(const int arr[], int n);
void themVaoMang(int arr[], int& n, int x, int k);
void xoaPhanTuOK(int arr[], int& n, int k);
int timX(int arr[], int &n, int x);
void tim(int arr[], int& n, int x);

int main()
{
    int n;
    cout << "nhap n: \n";
    cin >> n;
    int arr[SIZE];
    nhapMang(arr, n);
    cout << "mang ban dau: \n";
    xuatMang(arr, n);
    int x, k;
    cout << "\nnhap x, k" << endl;
    cin >> x >> k;
    themVaoMang(arr, n, x, k);
    cout << "mang sau khi them: \n";
    xuatMang(arr, n + 1);
    xoaPhanTuOK(arr, n, k);
    cout << "mang sau khi xoa: \n";
    xuatMang(arr, n - 1);
    int vitri = timX(arr, n ,x);
    if(vitri == -1)
        cout << "x khong co trong mang: \n";
    else
    {
        xoaPhanTuOK(arr, n, vitri);
        cout << "mang sau khi xoa: \n";
        xuatMang(arr, n - 1);
    }
    tim(arr, n, x);
    
    
    return 0;
}
// doc phan tu vao mang
void nhapMang(int arr[], int& n)
{
    if(n > 0)
    {
        cout << "nhap " << n << " phan tu mang: \n";
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    else
        cout << "ERROR \n";
}
// duyet mang
void xuatMang(const int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
//them vao mang
void themVaoMang(int arr[], int& n, int x, int k)
{
    for(int i = n - 1; i >= k; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[k] = x;
}
//xoa phan tu o vi tri k 
void xoaPhanTuOK(int arr[], int& n, int k)
{
    for(int i = k; i <= n - 2; i++)
    {
        arr[i] = arr[i] + 1;
    }
    cout << endl;
}
//tim x 
int timX(int arr[], int &n, int x)
{
    arr[n] = x;
    int i = 0;
    while(arr[i] != x)
    {
        i++;
    }
    if(i < n)
        return i;
    else
        return -1;
}
//tim
void tim(int arr[], int& n, int x)
{
    if (timX(arr, n, x) == -1)
        cout << "\nx khong co trong mang: \n";
    else
        cout << "\nx o vi tri " << timX(arr, n, x) << endl;
}

