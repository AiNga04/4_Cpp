#include<iostream>
using namespace std;

bool soDoiXung(string str)
{
	int len = str.size();
	for(int i = 0; i < len/2; i++)
	{
		if(str[i] != str[len - i - 1])
			return false;
	}
	return true;	
}

int main()
{
	string str;
	cin >> str;
	soDoiXung(str) ? cout << "Chuoi la chuoi doi xung."
				   : cout << "Chuoi khong la chuoi doi xung.";
 	return 0;
}

