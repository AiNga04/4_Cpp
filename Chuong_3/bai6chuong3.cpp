#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    long double x, result = 1.0, k = 1.0;
    cin >> n >> x;
    if (n/x < 1)
    {
        for (int i = 1; i <= n; i++) 
        {
            k *= x/i;
            result += k;
        }
    }
    else 
        result = exp(x);
    cout << fixed << setprecision(2) << result;
    return 0;
	
}


