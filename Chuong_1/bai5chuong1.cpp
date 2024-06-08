#include <iostream>
using namespace std;

struct SOPHUC {
    double thuc;
    double ao;
};

void nhap(SOPHUC &z);
void xuat(SOPHUC z);
SOPHUC tong(SOPHUC z1, SOPHUC z2);
SOPHUC hieu(SOPHUC z1, SOPHUC z2);
SOPHUC tich(SOPHUC z1, SOPHUC z2);

int main() {
    SOPHUC z1, z2;
    cout << "Nhap so phuc 1:" << endl;
    nhap(z1);
    cout << "Nhap so phuc 2:" << endl;
    nhap(z2);

    cout << "Tong hai so phuc la: ";
    xuat(tong(z1, z2));

    cout << "Hieu hai so phuc la: ";
    xuat(hieu(z1, z2));

    cout << "Tich hai so phuc la: ";
    xuat(tich(z1, z2));

    return 0;
}

void nhap(SOPHUC &z) {
    cout << "Nhap phan thuc: ";
    cin >> z.thuc;
    cout << "Nhap phan ao: ";
    cin >> z.ao;
}

void xuat(SOPHUC z) {
    cout << z.thuc << " + " << z.ao << "i" << endl;
}

SOPHUC tong(SOPHUC z1, SOPHUC z2) {
    SOPHUC kq;
    kq.thuc = z1.thuc + z2.thuc;
    kq.ao = z1.ao + z2.ao;
    return kq;
}

SOPHUC hieu(SOPHUC z1, SOPHUC z2) {
    SOPHUC kq;
    kq.thuc = z1.thuc - z2.thuc;
    kq.ao = z1.ao - z2.ao;
    return kq;
}

SOPHUC tich(SOPHUC z1, SOPHUC z2) {
    SOPHUC kq;
    kq.thuc = z1.thuc * z2.thuc - z1.ao * z2.ao;
    kq.ao = z1.thuc * z2.ao + z1.ao * z2.thuc;
    return kq;
}


