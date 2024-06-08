#include <iostream>
#include <cmath>

struct Diem {
    float x;
    float y;
};

Diem doiXungQuaTungDo(Diem d) {
    return {d.x, -d.y};
}

Diem doiXungQuaHoaDo(Diem d) {
    return {-d.x, d.y};
}

Diem doiXungQuaTam(Diem d) {
    return {-d.x, -d.y};
}

float khoangCach(Diem d1, Diem d2) {
    float dx = d1.x - d2.x;
    float dy = d1.y - d2.y;
    return sqrt(dx*dx + dy*dy);
}

using namespace std;

int main() {
    //Diem d1 = {1.0, 2.0};
    //Diem d2 = {3.0, 4.0};
    Diem d1,d2;
    cout << "Nhap toa do diem 1:\n";
    cin >> d1.x >> d1.y;
    cout << "Nhap toa do diem 2:\n";
    cin >> d2.x >> d2.y;

    Diem d3 = doiXungQuaTungDo(d1);
    cout << "Diem doi xung qua tung do: (" << d3.x << ", " << d3.y << ")" << endl;
    Diem d4 = doiXungQuaHoaDo(d1);
    cout << "Diem doi xung qua hoanh do: (" << d4.x << ", " << d4.y << ")" << endl;
    Diem d5 = doiXungQuaTam(d1);
    cout << "Diem doi xung qua tam do: (" << d5.x << ", " << d5.y << ")" << endl;
    
    Diem d6 = doiXungQuaTungDo(d2);
    cout << "Diem doi xung qua tung do: (" << d6.x << ", " << d6.y << ")" << endl;
    Diem d7 = doiXungQuaHoaDo(d2);
    cout << "Diem doi xung qua hoanh do: (" << d7.x << ", " << d7.y << ")" << endl;
    Diem d8 = doiXungQuaTam(d2);
    cout << "Diem doi xung qua tam do: (" << d8.x << ", " << d8.y << ")" << endl;

    float kc = khoangCach(d1, d2);
    cout << "Khoang cach giua d1 va d2: " << kc << endl;

    return 0;
}


