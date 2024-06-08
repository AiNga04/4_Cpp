#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    FILE *fp = fopen("SONGUYEN.INP", "wb");
    int n = 10000;
    for (int i = 0; i < n; i++) {
        int x = rand();
        fwrite(&x, sizeof(x), 1, fp);
        if ((i + 1) % 10 == 0) {
            fwrite("\n", sizeof(char), 1, fp);
        }
    }
    fclose(fp);

    fp = fopen("SONGUYEN.INP", "rb");
    int a[n];
    fread(a, sizeof(int), n, fp);
    fclose(fp);

    sort(a, a + n);

    fp = fopen("SONGUYEN.OUT", "w");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", a[i]);
        if ((i + 1) % 10 == 0) {
            fprintf(fp, "\n");
        }
    }
    fclose(fp);

    return 0;
}

