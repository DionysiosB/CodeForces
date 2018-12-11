#include<cstdio>
#include<vector>

int main(){

    long n, m, c; scanf("%ld %ld %ld", &n, &m, &c);
    std::vector<long> a(n, 0);
    long rem(n);long pos(0);
    while(rem){
        long x; scanf("%ld", &x);
        if(2 * x <= c){pos = 0; while(a[pos] && a[pos] <= x){++pos;}}
        else{pos = n - 1; while(a[pos] && a[pos] >= x){--pos;}}
        rem -= (a[pos] == 0);
        a[pos] = x;
        printf("%ld\n", pos + 1);
        fflush(stdout);
    }

    return 0;
}
