#include <bits/stdc++.h>

using namespace std;

struct THOIGIAN
{
    int h, p, s;
};

THOIGIAN nhapTG(THOIGIAN &x);
bool ktTG(THOIGIAN x);
int kcTG(THOIGIAN x, THOIGIAN y);
void xuatTG(const int x);

int main()
{
	cout << "Nhap thoi gian 1:\n";
    THOIGIAN tg1 = nhapTG(tg1);
    cout << "Nhap gio thoi gian 2:\n";
    THOIGIAN tg2 = nhapTG(tg2);
    if(ktTG(tg1) == true)
    {
        if(ktTG(tg2) == true)
        {
            int kc = kcTG(tg1, tg2);
            xuatTG(kc);
        }
    }
    
}

THOIGIAN nhapTG(THOIGIAN &x)
{
    cin >> x.h >> x.p >> x.s;
    return x;
}

bool ktTG(THOIGIAN x)
{
    int kt = false;
    if(0 <= x.h && x.h < 24)
    {
        if(0 <= x.p && x.p < 60)
        {
            if(0 <= x.s && x.s < 60)
            {
                kt = true;
            }
        }
    }
    return kt;
}
int kcTG(THOIGIAN x, THOIGIAN y)
{
    int tong1 = x.h*3600 + x.p*60 + x.s;
    int tong2 = y.h*3600 + y.p*60 + y.s;
    return abs(tong1 - tong2);
}
void xuatTG(const int x)
{
    int h = x/3600;
    int p = (x - h*3600)/60;
    int s = x - h*3600 - p*60;
    cout << "Khoang cach 2 moc thoi gian:\n";
    cout << h << ":" << p << ":" << s << endl;
}


