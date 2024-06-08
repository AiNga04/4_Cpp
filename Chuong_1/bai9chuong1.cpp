#include<bits/stdc++.h>

using namespace std;
int n;
struct sophuc{
	int x,y;

};

void nhap(sophuc &a)
{
	cin>>a.x>>a.y;
}

void xuat(sophuc a )
{
	cout<<a.x<<"+"<<a.y<<'i'<<endl;
}

sophuc add(sophuc a, sophuc b)
{
	sophuc sum;
	sum.x=a.x+b.x;
	sum.y=a.y+b.y;
	return sum;
}
sophuc hieu(sophuc a,sophuc b)
{
	sophuc ans;
	ans.x =a.x-b.x;
	ans.y =a.y-b.y;
	return ans;
}
sophuc tich(sophuc a,sophuc b)
{
    sophuc res;
	res.x = a.x*b.x - a.y*b.y;
	res.y = a.x*b.y + a.y*b.x;
	return res;
}	
void nhap1(sophuc a[])
{
	for(int i=0;i<n;i++) 
	nhap(a[i]);
}
void xuat1(sophuc a[])
{
	for(int i=0;i<n;i++) 
	xuat(a[i]);
}
sophuc add1(sophuc a[])
{
	sophuc sum=a[0] ;
	for(int i=1;i<n;i++)
	{
	   sum=add(a[i],sum);
	}
	return sum;
}
sophuc multiply1(sophuc a[])
{
	sophuc ans=a[0] ;
	for(int i=1;i<n;i++)
	{
	   ans=tich(a[i],ans);
	}
	return ans;
}
int main()
{
	cout << "Nhap n so phuc:\n";
	cin>>n;
	sophuc a[100];
	cout << "Nhap " << n << " so phuc:(phan thuc phan ao)\n";
	nhap1(a);
	sophuc res1=add1(a);	
	sophuc res2=multiply1(a);
	cout << "Tong: ";	
    xuat(res1);
    cout << "\nTich: ";
    xuat(res2);
    cout<<endl;
    return 0;
}



