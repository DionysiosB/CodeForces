#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        bool bl(false), br(false);
        for(long p = 0; p < n; p++){
            long left(0), right(0); scanf("%ld %ld", &left, &right);
            if(k == left){bl = true;}
            if(k == right){br = true;}
        }

        puts(bl && br ? "YES" : "NO");
    }

}
