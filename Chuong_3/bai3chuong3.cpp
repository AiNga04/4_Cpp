#include <bits/stdc++.h>

using namespace std;

void sum(int n)
{
    double s = 0;
    while(n != 0)
    {
        s = 1.0*s + 1.0*2/(n*(n+1));
        n--;
    }
    cout << setprecision(7) << s << endl;
}

int main()
{
    int n;
    cin >> n;
    sum(n);
}
