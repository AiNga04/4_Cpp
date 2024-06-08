#include <bits/stdc++.h>

using namespace std;

void sum(int n)
{
	double factorial = 1;
	double s = 1;
	for(int i = 1; i <= n; i++)
    {
        factorial *= i;
        s += 1.0/factorial;
    }
	cout << round(s*100)/100 << endl;
}

int main()
{
    int n;
    cin >> n;
    sum(n);
}
