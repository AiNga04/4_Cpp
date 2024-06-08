#include <iostream>

#define SIZE 100
#define M 100
#define N 100

using namespace std;

void nhapMang2(int array[][M], int& m, int& n);
void xuatMang(int arr[], int n, int m);
void chuyenMang(int arr[], int array[][M], int n, int m);

int main()
{
    int n, m;
    cout << "nhap mang [MxN]: \n";
    cin >> n >> m;
    int arr[SIZE];
    int array[N][M];
    nhapMang2(array, n, m);
    chuyenMang(arr, array, n, m);
    xuatMang(arr, n, m);
}

void nhapMang2(int array[][M], int& n, int& m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
}

void xuatMang(int arr[], int n, int m)
{
	for(int i = 0; i < n*m ; i++)
	{
		cout << arr[i] << " ";	
	}
	cout << endl;
}

void chuyenMang(int arr[], int array[][M], int n, int m)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[cnt++] = array[i][j];
        }
    }
}
