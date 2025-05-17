#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool liar(false);
        long cnt(0), prev(1);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(!prev && !x){liar = true;}
            prev = x;
            cnt += x;
        }

        if(cnt >= n){liar = true;}

        puts(liar ? "YES" : "NO");
    }

}
