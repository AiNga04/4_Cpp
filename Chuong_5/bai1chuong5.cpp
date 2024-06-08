#include<iostream>

#define SIZE 1000

using namespace std;

int arr[SIZE]; string str = "";

void nhiPhan(int n)
{
    if(n != 0)
    {
        nhiPhan(n/2);
        cout << n%2;
    }
}

void chuyenNP(int n)
{
    for(int i = 1; i <= n; i++)
    {
        nhiPhan(i);
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    chuyenNP(n);
}

