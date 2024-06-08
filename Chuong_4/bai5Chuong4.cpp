#include <iostream>

using namespace std;

int combination(int n, int k)
{
    if(k == n)
        return 1;
    else if(k == 1)
        return n;
    else
        return(combination(n - 1, k - 1) 
		+ combination(n - 1, k));
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << combination(n, k);
    return 0;
}


