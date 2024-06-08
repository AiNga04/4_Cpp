#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    ofstream outfile("SONGUYEN.INP");

    for (int i = 0; i < 10000; i++) {
        int x = rand() % 32767 + 1;
        outfile << x << " ";
    }

    outfile.close();

    return 0;
}

