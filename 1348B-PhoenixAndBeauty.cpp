#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::set<long> s;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}
        if(s.size() > k){puts("-1"); continue;}
        printf("%ld\n", n * k);
        for(long p = 0; p < n; p++){
            for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){printf("%ld ", *it);}
            for(long q = 0; q + s.size() < k; q++){printf("1 ");}
        }
        puts("");

    }

}
