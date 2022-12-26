#include <cstdio>

int main(){

    long a1, a2, a3, m; scanf("%ld %ld %ld %ld", &a1, &a2, &a3, &m);
    long minb1, minb2, minb3;
    long maxb1, maxb2, maxb3;

    bool possible(true);

    minb1 = a1; if(minb1 <= 2 * m){minb1 = 2 * m + 1;}
    maxb1 = 2 * a1; 

    minb3 = (a3 > m) ? a3 : m;
    maxb3 = 2 * ((a3 < m) ? a3 : m);

    long b1, b2, b3;
    if(minb1 > maxb1){possible = false;} else{b1 = maxb1;}
    if(minb3 > maxb3){possible = false;} else{b3 = minb3;}

    minb2 = a2; if(minb2 <= 2 * m){minb2 = 2 * m + 1;}
    minb2 = (minb2 >= b3 + 1) ? minb2 : (b3 + 1);
    maxb2 = 2 * a2; 
    maxb2 = (maxb2 <= b1 - 1) ? maxb2 : (b1 - 1);

    if(minb2 > maxb2){possible = false;} else{b2 = minb2;}

    if(possible){printf("%ld %ld %ld\n", b1, b2, b3);}
    else{puts("-1");}

    return 0;
}
