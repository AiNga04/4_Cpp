#include<bits/stdc++.h>
using namespace std;
int n;
struct maytinh
{
	string loai_may;
	string noi_sx;
	int time_bh;
};
void Nhap(maytinh& x)
{
	cin.ignore();
	cout<<"\nLoai may : ";
	getline(cin,x.loai_may);
	
//	cin.ignore();
	cout<<"\nNoi san xuat : ";
	getline(cin,x.noi_sx);
	
	cout<<"\nThoi gian bao hanh : ";
	cin>>x.time_bh;
}
void Xuat(maytinh x) 
{
	cout<< "\nloai may : "<< x.loai_may;
	cout<< "\nnoi san xuat : " << x.noi_sx;
	cout<< "\nthoi gian bao hanh : " << x.time_bh;
}
void NhapDS(maytinh a[])
{
	
	for(int i=0; i<n; i++)
	Nhap(a[i]);
}
void XuatDS(maytinh a[]) 
{
	for (int i = 0; i < n; i++)
	Xuat(a[i]);
}
int Count(maytinh a[]) 
{
	int tmp = 0;
	for (int i=0;i<n;i++) 
	{
		if (a[i].time_bh== 1)
		{
			tmp++;
		}
	}
	return tmp;
}
void check(maytinh a[])
{
	int kt=0;
	for (int i=1;i<n;i++)
	{
		if (a[i].noi_sx=="My") 
		{
			Xuat(a[i]);
			kt=1;
			cout<<endl;
		}
	}
	if (!kt) cout << "ko co may nao ";
}
int main() 
{
	cout<< "So luong may : ";
	cin>>n;
	cin.ignore();
	maytinh a[1000];
	NhapDS(a);
	cout<< "so luong may bh 1 nam: " <<Count(a);
	cout<<endl;
	cout<<"Made in America:  ";
	check(a);
}



