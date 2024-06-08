#include<iostream>
#include<bitset>

using namespace std;

void batBitThuI(int n, int i)
{
	int b = n & (~(1 << (i - 1)));
	cout << "tat bit thu i cua n\n";
	bitset <32> C(b);
	cout << C << endl;
}

void tatBitThuI(int n, int i)
{
	int b = n | (1 << (i - 1));
	cout << "bat bit thu i cua n\n";
	bitset <32> D(b);
	cout << D << endl;
}

int layGiaTriThuI(int n, int i)
{
	return((n >> (i - 1)) & 1);
}


int main()
{
	int n, i;
	cin >> n >> i;
	bitset <32> B(n);
	cout << "bit n\n" << B << endl;
	batBitThuI(n, i);
	tatBitThuI(n, i);
	cout << "gia tri bit thu i cua n\n";
	cout << layGiaTriThuI(n, i);
 	return 0;
}

