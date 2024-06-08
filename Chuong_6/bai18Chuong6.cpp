#include<iostream>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	int A[n + 1];
	for(int i = 1; i <= n; i++) cin >> A[i];
	int dp[m + 1];
	dp[0] = 0;
	for(int i = 1; i <= m; i++)
	{
		dp[i] = 1e9;
		for(int j = 1; j <= n; j++)
		{	
			if(i >= A[j])
			{
				dp[i] = min(dp[i], dp[i - A[j]] + 1);
			}
		}
	}
	if(dp[m] == 1e9) cout << "KHONG DOI DUOC\n";
	else
	{
		cout << "tong so to tien phai tra : "<< dp[m] << "\n";
		int i = m;
		cout << "cac menh gia de doi tien la : ";
		while(i > 0)
		{
			for(int j = 1; j <= n; j++)
			{
				if(i >= A[j] && dp[i - A[j]] + 1 == dp[i])
				{
					cout << A[j] << " ";
					i -= A[j];
					break;
				}
			}
		}
		
	}
}