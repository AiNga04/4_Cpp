#include<iostream>

#define SIZE 50

using namespace std;

int arr[SIZE] = {0};

void xuat(int k)
{
	cout << "{ ";
	for(int i = 0; i < k; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}" << endl;
}

void topHopChapKCuaN(int n, int k)
{
	int i;
	for(i = 0; i < k; i++)
	{
		arr[i] = i;
	}
	xuat(k);
	i = k - 1;
	do
	{
		while(arr[i] < n - k + i)
		{
			arr[i]++;
			for(int j = i + 1 ; j < k; j++)
			{ 
				arr[j] = arr[j - 1]+1;
			}
			xuat(k);
			i = k - 1;
		}
		i--;
	}while(i >= 0);
}

int main()
{
	int n, k;
	cin >> n >> k;
	topHopChapKCuaN(n, k);
 	return 0;
}

