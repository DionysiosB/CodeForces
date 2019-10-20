#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    if(n % 2){
        puts("YES");
        std::vector<long> a(2 * n);
        for(long p = 0; p < n; p++){
            if(p % 2){a[p] = 2 * p + 2; a[p + n] = 2 * p + 1;}
            else{a[p] = 2 * p + 1; a[p + n] = 2 * p + 2;}
        }
        for(long p = 0; p < 2 * n; p++){printf("%ld ", a[p]);}
        puts("");
    }
    else{puts("NO");}

    return 0;
}
