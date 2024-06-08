#include<iostream>

using namespace std;

int result(int n)
{
    if(n == 0)
    	return 0;
    else if(n == 1)
    	return 1;
    else if(n % 2 == 0)
    	return result(n/2);
    else
    	return result(n/2) + result(n/2 + 1);		
}

int main()
{
    int n;
    cin >> n;
    cout << result(n);

}
