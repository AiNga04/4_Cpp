#include<iostream>

#define SIZE 1000

using namespace std;

int arr[SIZE][SIZE];

void getArray(int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void result(int n, int m)
{
	int oke = true;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			int max_row = arr[i][0];
			int min_col = arr[0][j];
			for (int k = 1; k < n; k++) 
			{
                if (arr[i][k] > max_row) 
				{
                    max_row = arr[i][k];
                }
            }
            
            for(int k = 1; k < m; k++)
            {
            	if(arr[k][j] < min_col)
            	{
            		min_col = arr[k][j];
				}
			}
			if(arr[i][j] == max_row && arr[i][j] == min_col)
			{
                cout << "arr[" << i << "][" << j 
					 << "] = " << arr[i][j] << endl;
                oke = false;
        	}
		}
	}
	if(oke)
		cout << "NO FOUND";
}



int main()
{
	int n, m;
	cin >> n >> m;
	getArray(n, m);
	result(n, m);
 	return 0;
}

