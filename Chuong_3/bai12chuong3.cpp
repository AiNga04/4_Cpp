#include<bits/stdc++.h>

using namespace std;

string mul(string a,string b)
{
	int n1 = a.size();
	int n2 = b.size();
	reverse(begin(a),end(a));
	reverse(begin(b),end(b));
	vector<int> ans(n1+n2,0);
	for(int i=0;i<n1;i++)
	{
		int rem = 0;
		int j = 0;
		for(j;j<n2;j++)
		{
			int tmp = (a[i]-'0')*(b[j]-'0') + rem + ans[i+j];
			ans[i+j] = tmp%10;
			rem = tmp/10;
		}
		if(rem>0) 
			ans[i+j] += rem;
	}
	while(ans.back()==0 && ans.size()>1)
	{
		ans.pop_back();
	}
	reverse(begin(ans),end(ans));
	string res = "";
	for(int i=0;i<ans.size();i++)
	{
		res.push_back((ans[i]+'0'));
	}
	return res;
}
string sum(string a,string b)
{
	int n1 = a.size();
	int n2 = b.size();
	reverse(begin(a),end(a));
	reverse(begin(b),end(b));
	b = b+string(n1-n2,'0');
	string ans="";
	int rem = 0;
	for(int i=0;i<n1;i++)
	{
		int tmp = (a[i]-'0') + (b[i]-'0') + rem;
		ans.push_back(tmp%10 + '0');
		rem = tmp/10;
	}
	if(rem) ans.push_back(rem+'0');
	reverse(ans.begin(),ans.end());
	return ans;
}

string longDivisor(string a , int divisor)
{
	string ans = "";
	int i = 0;
	int rem = 0;
	for(int i = 0 ; i<a.size() ; i++){
		rem = rem * 10 + (a[i]-'0');
		ans += char(rem/divisor+'0');
		rem %= divisor; 
	}
	i = 0;
	while(i<a.size() && ans[i] == '0')
		i++;
	if(i == a.size())
		return "0";
	return ans.substr(i);		 
}
 
int main()
{
	long long n;
	cin >> n;
	string k = to_string(n) , k1 = sum(k,"1");
	string k2 = sum(k1,"1") , k3 = mul(k1,k);
	string k4 = mul(k2,k3) , k5 = longDivisor(k4,6);
	cout<<k5;
}
