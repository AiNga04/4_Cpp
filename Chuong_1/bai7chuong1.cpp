#include <iostream>
using namespace std;

struct HONSO {
    int nguyen; 
    int tu; 
    int mau;
};

int UCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void rutgon(HONSO& hs) {
    int ucln = UCLN(hs.tu, hs.mau);
    hs.tu /= ucln;
    hs.mau /= ucln;
}

void HONSOtoPHANSO(HONSO hs, int& tu, int& mau) {
    tu = hs.nguyen * hs.mau + hs.tu;
    mau = hs.mau;
}

HONSO tongHONSO(HONSO hs1, HONSO hs2) {
    HONSO kq;
    int tu1, tu2, mau;
    HONSOtoPHANSO(hs1, tu1, mau);
    HONSOtoPHANSO(hs2, tu2, mau);
    kq.nguyen = 0;
    kq.tu = tu1 * hs2.mau + tu2 * hs1.mau;
    kq.mau = hs1.mau * hs2.mau;
    rutgon(kq);
    return kq;
}

HONSO tichHONSO(HONSO hs1, HONSO hs2) {
    HONSO kq;
    int tu1, tu2, mau;
    HONSOtoPHANSO(hs1, tu1, mau);
    HONSOtoPHANSO(hs2, tu2, mau);
    kq.nguyen = 0;
    kq.tu = tu1 * tu2;
    kq.mau = hs1.mau * hs2.mau;
    rutgon(kq);
    return kq;
}

int main() {
    HONSO hs1, hs2, tong, tich;
    cout << "Nhap vao hai hon so: " << endl;
    cout << "Nhap vao hon so thu nhat (nguyen tu mau): ";
    cin >> hs1.nguyen >> hs1.tu >> hs1.mau;
    cout << "Nhap vao hon so thu hai (nguyen tu mau): ";
    cin >> hs2.nguyen >> hs2.tu >> hs2.mau;

    tong = tongHONSO(hs1, hs2);
    cout << "Tong hai hon so la: " << tong.nguyen << " " << tong.tu << "/" << tong.mau << endl;
    tong = tichHONSO(hs1, hs2);
    cout << "Tich hai hon so la: " << tong.nguyen << " " << tong.tu << "/" << tong.mau << endl;
}


