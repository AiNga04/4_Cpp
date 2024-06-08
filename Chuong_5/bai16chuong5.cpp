#include<bits/stdc++.h>

using namespace std;

#define sz 10000

int n, m, x, y, best = INT_MAX, cnt = 0, ok ;

int A[sz][sz], B[sz][sz];
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};

vector<vector<int>> v;
vector<vector<int>> ans;

int getBit(int n, int k) 
{
	return (n & (1 << k));
}
void inp() {
	cin >> n >> m;
	srand(time(NULL));
	for(int i = 1; i <= n; i++) 
	{
		for(int j = 1; j <= m; j++) 
		{
			cin >> A[i][j];
			B[i][j] = 1;
		}
	}
	cin >> x >> y;
}

void Try(int i, int j ,int cnt) 
{
	if(i == n ) 
	{
		if(best > cnt) 
		{
			best = cnt;
			ans = v;
			ok = 1;
		}
	}
	for(int k = 0; k < 8; k++) 
	{
		int i1 = i + dx[k],  j1 = j + dy[k];
		int l = getBit(A[i][j], k);
		if(l && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && B[i1][j1]) 
		{
			vector<int> tmp;
			tmp.push_back(i1);
			tmp.push_back(j1);
			v.push_back(tmp);
			B[i1][j1] = 0;
			Try(i1, j1, cnt+1);
			B[i1][j1] = 1;
			tmp.pop_back();
			tmp.pop_back();
			v.pop_back();
		}
	}

}
int main() 
{	
	#ifndef BT
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	inp();
	ok = 0;
	Try(x,y,0);
	if(!ok) 
	{
		cout << 0;
	} else 
	{
		cout << best + 1<< "\n";
		cout << x << " " << y << "\n";
		for(int i = 0; i < ans.size(); i++) 
		{
			for(int j = 0; j < ans[i].size(); j++) 
			{
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}
}
