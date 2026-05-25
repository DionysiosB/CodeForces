#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> cm;
        long prev(0); scanf("%ld", &prev); cm[prev] = 0;
        long x(prev);
        for(long p = 1; p < n; p++){
            scanf("%ld", &x);
            if(x != prev){++cm[x];}
            prev = x;
        }

        long mn(n + 1);
        for(std::map<long, long>::iterator it = cm.begin(); it != cm.end(); it++){
            long num = (it->second) + (it->first != x);
            mn = (mn < num) ? mn : num;
        }

        printf("%ld\n", mn);
    }

}
