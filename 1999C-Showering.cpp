#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s, m; scanf("%ld %ld %ld", &n, &s, &m);
        long prev(0); bool res(false);
        for(long p = 0; p < n; p++){
            long left, right; scanf("%ld %ld", &left, &right);
            if(prev + s <= left){res = true;}
            prev = right;
        }

        if(prev + s <= m){res = true;}
        puts(res ? "YES" : "NO");
    }

}
