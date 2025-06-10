#include <cstdio>
#include <unordered_set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::unordered_set<long> ms, fs;
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            fs.insert(x);
            if(ms.count(x)){ms.erase(x);}
            if(ms.empty()){++cnt; ms = fs; fs.clear();}
        }

        printf("%ld\n", cnt);

    }

}
