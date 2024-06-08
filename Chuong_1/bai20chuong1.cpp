#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("SOCHAN.DAT");
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            outfile << i << " ";
        }
    }
    outfile.close();

    ifstream infile("SOCHAN.DAT");
    int count = 0;
    int x;
    while (infile >> x) {
        cout << x << " ";
        count++;
        if (count % 30 == 0) {
            cout << endl;
        }
    }
    infile.close();

    return 0;
}

