#include <cstdio>

int main(){
    
    long na, nb; scanf("%ld %ld\n", &na, &nb);
    long k, m; scanf("%ld %ld\n", &k, &m);

    long low, high;
    for(long p = 0; p < na; p++){
        long temp; scanf("%ld", &temp);
        if(p == k - 1){low = temp;}
    }

    for(long p = 0; p < nb; p++){
        long temp; scanf("%ld", &temp);
        if(p == nb - m){high = temp;}
    }

    puts((low < high) ? "YES" : "NO");

    return 0;
}
