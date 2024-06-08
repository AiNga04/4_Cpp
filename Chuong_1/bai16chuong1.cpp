#include<bits/stdc++.h>
using namespace std;
int n;
struct mh
{
	string maHang, tenMaHang  ;
	int soluong;
	double donGia;
	int soLuongTonsoLuongTon;
	int thoiGianBaoHanh;
};
void nhap(mh &x) 
{
	cout<<"ma hang : ";
	cin>>x.maHang;
	
	cin.ignore();
	cout<<"ten mat hang : ";
	getline(cin,x.tenMaHang);
	
	cout<<"so_luong  : ";
	cin>>x.soluong;
	
	cout<<"don gia : ";
	cin>>x.donGia;
	
	cout<<"so luong ton : ";
	cin>>x.soLuongTonsoLuongTon;
	
	cout<<"thoi gian bao hanh : ";
	cin>>x.thoiGianBaoHanh;
}
void xuat(mh x)
{
	cout<<"\nma hang : "<<x.maHang;
	cout<<"\nten mat hang : "<<x.tenMaHang;
	cout<<"\nso luong  : "<<x.soluong;
	cout<<"\ndon gia : "<<x.donGia;
	cout<<"\nso luong ton : "<<x.soLuongTonsoLuongTon;
	cout<<"\nthoi gian bao hanh : "<<x.thoiGianBaoHanh;
}
void nhapds(mh a[])
{
	for(int i=0;i<n;i++) 
	{
		nhap(a[i]);
	}
}
void xuatds(mh a[]) 
{
	for(int i=0;i<n; i++) 
	{
		xuat(a[i]);
		cout<<endl;
	}
}
void sl_ton_max(mh a[]) 
{
	int ans= a[0].soLuongTonsoLuongTon;
	for(int i=0; i<n; i++) {
		if(a[i].soLuongTonsoLuongTon>=ans) 
		{
			ans =a[i].soLuongTonsoLuongTon;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i].soLuongTonsoLuongTon==ans) 
		{
			xuat(a[i]);
			cout<<'\n';
		}
	}
}
void sl_ton_min(mh a[])
{
	int ans =a[0].soLuongTonsoLuongTon;
	for(int i=0; i<n; i++) 
	{
		if(a[i].soLuongTonsoLuongTon<=ans)
		{
			ans=a[i].soLuongTonsoLuongTon;
		}
	}
	for(int i=0; i<n; i++) 
	{
		if(a[i].soLuongTonsoLuongTon ==ans)
		{
			xuat(a[i]);
			cout<<'\n';
		}
	}
}
void gia_max(mh a[])
{
	int ans =a[0].donGia;
	for(int i=0;i<n; i++)
	 {
		if(a[i].donGia>=ans) 
		{
			ans=a[i].donGia;
		}
	}
	for(int i=0; i<n; i++) 
	{
		if(a[i].donGia==ans) 
		{
			xuat(a[i]);
			cout<<'\n';
		}
	}
}
void check_bh(mh a[]) 
{
	for(int i=0; i<n; i++) 
	{
		if(a[i].thoiGianBaoHanh >=12)
		{
		    xuat(a[i]);
			cout<<'\n';
		}
	}
}
void sap_xep(mh a[])
{
	mh tmp;
	for(int i=0; i<n-1; i++) 
	{
		
		for(int j=0; j<n-1-i; j++) 
		{
			if(a[j].soLuongTonsoLuongTon > a[j+1].soLuongTonsoLuongTon) 
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

int main() 
{
	cout<<"nhap so luong mat hang : ";
	cin>>n;
	cin.ignore();
	mh a[1000];
	nhapds(a);
    xuatds(a);
    cout<<"\nmat hang so luong ton max : ";sl_ton_max(a);cout<<'\n';
    
    cout<<"\nmat hang so luong ton min: ";sl_ton_min(a);cout<<'\n';
    
    cout<<"\nmat hang gia tien cao nhat : ";gia_max(a);cout<<'\n';
    
    cout<<"\nmat hang bao hanh 12 thang : ";check_bh(a);cout<<'\n';
    
    cout<<"\nsap xep : ";sap_xep(a);cout<<'\n';xuatds(a);
}



