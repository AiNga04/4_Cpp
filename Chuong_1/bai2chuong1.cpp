#include<bits/stdc++.h>
using namespace std;

int n;

int lcm(int a,int b) 
{
    return a/__gcd(a,b)*b;
}

typedef struct PHANSO 
{	int tu,mau;
    
} ps;

void nhap(ps &x); 
void xuat(ps y); 
void rutgon(ps &a); 
ps add(ps x,ps y);
ps sub(ps a,ps b);
int check(ps a);
ps multiply(ps a,ps b);
void div(ps x,ps y);
int compare(ps x,ps y);
ps nghichdao(ps a);
void nhap2(ps a[]);
void xuat2(ps a[]);
ps tong(ps a[]);
ps hieu(ps a[]);
void tich(ps a[]);
void max_1(ps a[]);

int main()
 {
 	ps a[100];
 	cout << "Nhap so phan so: ";
	cin>>n;
	cout << "Nhap phan so: " << endl;
 	nhap2(a);
	ps res1=tong(a);
	ps res2=hieu(a);
 	cout<<"tong: ";
 	xuat(res1);
 	cout<<"hieu: ";
 	xuat(res2);
 	cout<<"tich: ";
 	tich(a);
	cout<<"phan so lon nhat la: ";
	max_1(a);
	cout << "Cac nghich dao cua cac phan so la: \n";
	xuat2(a);
}

ps tong(ps a[]) 
{
	ps sum = a[0];
	for(int i=1; i<n; i++) 
	sum = add(sum,a[i]);
	rutgon(sum);
	return sum;
}
ps hieu(ps a[])
{
	ps tmp=a[0];
	for(int i=1; i<n; i++) 
	tmp= sub(tmp,a[i]);
	rutgon(tmp);
	return tmp;
}
void tich(ps a[])
{
	ps ans;
	ans.tu =1;
	ans.mau=1;
	
	for(int i=0; i<n; i++) 
	ans = multiply(ans,a[i]);
	
	if(check(ans))
	{	
    	cout<<0<<"\n";
	    return ;
	}
	xuat(ans);
}

void max_1(ps a[])
{
	ps res;
	for(int i=0;i<n;i++)
	{
		if(compare(res,a[i]) == -1)
		{
			res= a[i];
		}
	}
	xuat(res) ;
}

void nhap(ps &x) 
{	
   cin>>x.tu>>x.mau;
}
void xuat(ps y) 
{
	cout<<y.tu<<'/'<<y.mau<<endl;
}
void rutgon(ps &a) 
{
	int tmp=__gcd(a.tu,a.mau);
	a.tu /=tmp;
	a.mau /=tmp;
}
ps add(ps x,ps y) 
{
	int tmp = lcm(x.mau,y.mau);
	x.tu= x.tu*tmp/x.mau;
	y.tu= y.tu*tmp/y.mau;
	x.tu+= y.tu;
	x.mau = tmp;
	rutgon(x);
	return x;
}
ps sub(ps a,ps b) 
{
	int tmp=lcm(a.mau,b.mau);
	a.tu = a.tu*tmp/a.mau;	
	b.tu = b.tu*tmp/b.mau;
	a.tu-=b.tu;
	a.mau=tmp;
	rutgon(a);	
	return a;
}
int check(ps a)
{ 
    if(a.tu==0) return 1;
	return 0;
}
ps multiply(ps a,ps b)
{
	a.tu*=b.tu;
	a.mau*=b.mau; 
	rutgon(a); 
	return a;
}
void div(ps x,ps y) 
{
	if(check(x)||check(y))
	{	cout<<0;
    	return;
	}
	x.tu*=y.mau;
	x.mau*=y.tu;
	rutgon(x);	
	xuat(x);
}
int compare(ps x,ps y)
{	
	int Y=x.tu*y.mau - x.mau*y.tu;
	if(Y==0) return 0;
	if (Y>0) return 1;
	return -1;
}
ps nghichdao(ps a)
{
	int tmp= a.tu;
	a.tu= a.mau;
	a.mau= tmp;
	return a;
}

void nhap2(ps a[]) 
{
	for(int i=0;i<n;i++)  
	nhap(a[i]);
}
void xuat2(ps a[]) 
{
    for(int i=0; i<n; i++) 
	xuat(nghichdao(a[i]));
}

