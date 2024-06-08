#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cout << "Nhap chuoi ky tu: ";
	//cin >> str;
	getline(cin, str);
	int lowercase = 0, uppercase = 0,
		digits = 0, others = 0;
	for(int i = 0; i < str.size() - 1; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			lowercase++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			uppercase++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			digits++;
		}
		else
		{
			others++;
		}
	}
	cout << "So ky tu thuong: " << lowercase << endl;
    cout << "So ky tu hoa: " << uppercase << endl;
    cout << "So chu so: " << digits << endl;
    cout << "So ky tu khac: " << others << endl;
	//cout << lowercase << ' ' << uppercase << ' ' << digits << ' ' << others;
    return 0;
	
	
	
}

