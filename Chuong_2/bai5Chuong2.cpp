#include <iostream>

#define SIZE 100
#define M 100
#define N 100

using namespace std;

void nhapMang1(int arr[], int& n, int& m);
void chuyenMang(int arr[], int array[][M], int n, int m);
void xuatMang(int array[][M], int n, int m);

int main()
{
    int n, m;
    cout << "nhap n, m: \n";
    cin >> n >> m;
    int arr[SIZE];
    nhapMang1(arr, n, m);
    int array[N][M];
    chuyenMang(arr, array, n, m);
    xuatMang(array, n, m);
}

void nhapMang1(int arr[], int& n, int& m)
{
    cout << "nhap " << n*m << " phan tu mang:" << endl;
    for(int i = 0; i < n*m; i++)
    {
        cin >> arr[i];
    }
}

void chuyenMang(int arr[], int array[][M], int n, int m)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            array[i][j] = arr[cnt++];
        }
    }
}

void xuatMang(int array[][M], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
