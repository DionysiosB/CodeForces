#include<cstdio>
#include<vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<bool> mark(n);
    printf("1 ");

    long right(n - 1), cnt(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x); --x;
        mark[x] = 1;
        if(x == right){while(right >= 0 && mark[right]){cnt++; --right;}}
        printf("%ld ", 2 + p - cnt);
    }

    puts("");

    return 0;
}
