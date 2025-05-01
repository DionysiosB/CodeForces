#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(-1), b(-1);
        bool res(true);
        while(n--){
            long x; scanf("%ld", &x);
            if(x % 2){
                if(a <= x){a = x;}
                else{res = false;}
            }
            else{
                if(b <= x){b = x;}
                else{res = false;}
            }
        }

        puts(res ? "Yes" : "No");
    }

}
