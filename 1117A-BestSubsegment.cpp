#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long mx(-1), len(0), cnt(0); 
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if(a > mx){mx = a; len = cnt = 1;}
        else if(a == mx){++cnt; len = (cnt > len) ? cnt : len;}
        else{cnt = 0;}
    }

    printf("%ld\n", len);

    return 0;
}
