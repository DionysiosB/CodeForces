#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x);
        long left(x - 1), right(x + 1);
        bool rule(true);
        for(long p = 1; p < n; p++){
            scanf("%ld", &x);
            if(x == left){--left;}
            else if(x == right){++right;}
            else{rule = false;}
        }

        puts(rule ? "YES" : "NO");
    }

}
