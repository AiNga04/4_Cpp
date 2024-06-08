#include <iostream>
#include <string>

using namespace std;

int sumNumbersInString(string s)
{
    int sum = 0;
    int num = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
            num = num * 10 + (s[i] - '0');
        else
        {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    return sum;
}

int main()
{
    string s;
    getline(cin, s);
    int sum = sumNumbersInString(s);
    cout << "Tong cac so trong chuoi: " << sum << endl;
    return 0;
}

