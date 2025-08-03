#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s; scanf("%ld %ld", &n, &s);
        long z(0), a(0), w(0), total(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            z += (x == 0);
            a += (x == 1);
            w += (x == 2);
            total += x;
        }

        if(total == s || total + 2 <= s){printf("-1");}
        else{
            while(z--){printf("0 ");}
            while(w--){printf("2 ");}
            while(a--){printf("1 ");}
        }
        puts("");
    }

}
