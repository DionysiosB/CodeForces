#include <cstdio>
#include <vector>

int main(){

    long k; scanf("%ld", &k);
    long nr(0), nc(0);
    for(long p = 1; p * p <= k; p++){
        if(k % p){continue;}
        nr = p; nc = k / p;
    }

    if(nr < 5){puts("-1"); return 0;}

    std::vector<std::vector<char> > m(nr, std::vector<char>(nc, 'd'));

    std::vector<char> s(5); s[0] = 'a'; s[1] = 'e'; s[2] = 'i'; s[3] = 'o'; s[4] = 'u';

    long vow(0), row(0), col(0), x(k);
    while(x--){
        m[row][col] = s[(vow / nc) % 5];
        ++vow;
        ++row; row %= nr;
        ++col; col %= nc;
        if(m[row][col] != 'd'){col = (col + 1) % nc;}
    }

    for(long row = 0; row < nr; row++){for(long col = 0; col < nc; col++){printf("%c", m[row][col]);}}

    return 0;
}
