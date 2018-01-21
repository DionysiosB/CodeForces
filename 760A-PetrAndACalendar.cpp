#include <cstdio>
#include <map>

int main(){

    const int W = 7;
    std::map<int, int> md;
    md[1] = 31; md[2] = 28; md[3] = 31; md[4] = 30; md[5] = 31; md[6] = 30;
    md[7] = 31; md[8] = 31; md[9] = 30; md[10] = 31; md[11] = 30; md[12] = 31;

    int m, d; scanf("%d %d\n", &m, &d);
    int days = md[m];
    int weeks(1); days -= (W + 1 - d);
    weeks += (days / W) + (days % W > 0);

    printf("%d\n", weeks);

    return 0;
}
