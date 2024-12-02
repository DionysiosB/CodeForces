#include <cstdio>
#include <map>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++m[x];}
        long ones(0), more(0);
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long cnt = it->second;
            if(cnt == 1){++ones;}
            else{++more;}
        }

        printf("%ld\n", 2 * ((ones + 1) / 2) + more);
    }

}
