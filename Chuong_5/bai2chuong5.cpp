#include<iostream>
#include<cmath>

using namespace std;

bool kiemTra(int n)
{
	int k = n, cnt = 0;
	while(k != 0)
	{
		cnt++;
		k /= 10;
	}
	int sum = 0, m = 0;
 	k = n;
	while(k != 0)
	{
		m = k % 10;
		sum += pow(m, cnt);
		k /= 10;
	}
	return (sum == n);	
}

void soArmstrong(int a, int b)
{
	int sum = 0; 
	cout << "Cac so Armstrong trong [" << a << ", " << b << "]" << endl;
	for(int i = a; i < b; i++)
	{
		if(kiemTra(i))
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << endl;
	cout << "Tong Armstrong trong [" << a << ", " << b << "]" << endl;
	cout << sum;
}

int main()
{
	int a, b;
	cout << "Nhap [a, b]\n";
	cin >> a >> b;
	soArmstrong(a, b);
 	return 0;
}

