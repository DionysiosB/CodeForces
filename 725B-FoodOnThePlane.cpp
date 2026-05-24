#include <cstdio>

int main(){
    long long row; char col;
    scanf("%lld%c", &row, &col);
    printf("%lld", ((row - 1) / 4) * 16 + ((row % 2 == 0) ? 7 : 0) +((col > 'c') ? ('g' - col): (col- 'a' + 4)));
}
