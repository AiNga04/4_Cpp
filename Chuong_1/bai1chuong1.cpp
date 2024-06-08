#include <iostream>
#include <string>
using namespace std;

struct DATE {
    int day, month, year;
};

struct HOCSINH {
    string MSHS;
    string hoten;
    DATE ngaysinh;
    string diachi;
    string phai;
    float diemtb;
};

int main() {
    int n;
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;
    HOCSINH dsHS[n];
    // Nhap thong tin cua danh sach hoc sinh
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin cua hoc sinh thu " << i+1 << endl;
        cout << "MSHS: ";
        cin >> dsHS[i].MSHS;
        cout << "Ho ten: ";
        getline(cin >> ws, dsHS[i].hoten);
        cout << "Ngay sinh (dd/mm/yyyy): ";
        cin >> dsHS[i].ngaysinh.day >> dsHS[i].ngaysinh.month >> dsHS[i].ngaysinh.year;
        cout << "Dia chi: ";
        getline(cin >> ws, dsHS[i].diachi);
        cout << "Gioi tinh: ";
        cin >> dsHS[i].phai;
        cout << "Diem trung binh: ";
        cin >> dsHS[i].diemtb;
    }

    // Xuat thong tin cua danh sach hoc sinh
    cout << "\nThong tin cua danh sach hoc sinh:\n";
    for (int i = 0; i < n; i++) {
        cout << "Hoc sinh thu " << i+1 << endl;
        cout << "MSHS: " << dsHS[i].MSHS << endl;
        cout << "Ho ten: " << dsHS[i].hoten << endl;
        cout << "Ngay sinh: " << dsHS[i].ngaysinh.day << "/" 
             << dsHS[i].ngaysinh.month << "/" 
             << dsHS[i].ngaysinh.year << endl;
        cout << "Dia chi: " << dsHS[i].diachi << endl;
        cout << "Gioi tinh: " << dsHS[i].phai << endl;
        cout << "Diem trung binh: " << dsHS[i].diemtb << endl << endl;
    }

    // Dem so luong hoc sinh duoc len lop
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (dsHS[i].diemtb >= 5.0) {
            count++;
        }
    }

    cout << "So luong hoc sinh duoc len lop: " << count << endl;

    return 0;
}


