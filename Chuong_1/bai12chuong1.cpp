#include<bits/stdc++.h>
using namespace std;
int n;
struct VD
{
	string ten,theloai,tendaodien,main_nam,main_nu,nam,hang;
};
void nhapVD(VD &x) 
{
	cin.ignore();
	cout<<"nhap_ten: ";
	getline(cin,x.ten);
	
//	cin.ignore();
	cout<<"the_loai: ";
	getline(cin,x.theloai);
	
//	cin.ignore();
	cout<<"ten_dao_dien: ";
	getline(cin,x.tendaodien);
	
//	cin.ignore();
	cout<<"ten_nam_chinh: ";
	getline(cin,x.main_nam);
	
//	cin.ignore();
	cout<<"ten_nu_chinh: ";
	getline(cin,x.main_nu);
	
//	cin.ignore();
	cout<<"nam_san_xuat: ";
	cin>>x.nam;
	
	cin.ignore();
	cout<<"hang_san_xuat: ";
	getline(cin,x.hang);
}
void xuatVD(VD x) 
{
	cout<<"\nnhap_ten: ";
	cout<<x.ten ;
	cout<<"\nthe_loai : ";
	cout<<x.theloai;
	cout<<"\nten_dao_dien: ";
	cout<<x.tendaodien;
	cout<<"\nten_nam_chinh: ";
	cout<<x.main_nam;
	cout<<"\nten_nu_chinh : ";
	cout<<x.main_nu;
	cout<<"\nnam_san_xuat: ";
	cout<<x.nam;
	cout<<"\nhang_san_xuat: ";
	cout<<x.hang;
	cout<<'\n';
}

void nhap1(VD a[]) 
{
	for(int i=0;i<n;i++) 
	nhapVD(a[i]);
}
void xuat1(VD a[]) 
{
	for(int i=0;i<n;i++) 
	xuatVD(a[i]);
}
//b
void Tim_the_loai(VD a[],string tl) 
{
	for(int i=0; i<n; i++) 
	{
		if(tl==a[i].theloai) 
		{
			xuatVD(a[i]);
			cout<<endl;
		}
	}
}
//c
void Tim_dien_vien(VD a[],string ten) 
{
	for(int i=0; i<n; i++) 
	{
		if(ten == a[i].main_nam)
		{
			xuatVD(a[i]);
			cout<<endl;
		}
	}
}
//d
void Tim_dao_dien(VD a[],string ten) 
{
	for(int i=0; i<n; i++)
	{
		if(ten==a[i].tendaodien)
		{
			xuatVD(a[i]);
			cout<<endl;
		}
	}
}
int main() 
{
	cout<<"So_luong_video : ";
	cin>>n;
    cin.ignore();
	VD a[n];
	nhap1(a);
	
	cout<<"Ten_the_loai : ";
	string tl;
	getline(cin,tl);
	Tim_the_loai(a,tl);
	
	cout<<"Nhap_ten_main_nam: ";
	string dv;
	getline(cin,dv);
	Tim_dien_vien(a,dv);
	
	cout<<"Nhap_ten_dao_dien : ";
	string dd;
	getline(cin,dd);
	Tim_dao_dien(a,dd);
}



