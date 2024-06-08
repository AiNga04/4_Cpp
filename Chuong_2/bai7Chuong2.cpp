#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void viethoa(string &s);
void chuanhoa(string s);

int main()
{
	string s;
	getline(cin,s);
	chuanhoa(s);
}

void viethoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
void chuanhoa(string s)
{
	string a[100];
	stringstream ss(s);
	string tmp;
	int n=0;
	while(ss >> tmp) 
		a[n++] = tmp;
	for(int i = 0; i < n; i++)
	{
		viethoa(a[i]);
		cout<<a[i]<<' ';
	}
}
