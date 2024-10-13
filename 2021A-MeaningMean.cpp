#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::multiset<long> ms;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ms.insert(x);}
        while(ms.size() > 1){
            long x = *ms.begin(); ms.erase(ms.begin());
            long y = *ms.begin(); ms.erase(ms.begin());
            ms.insert((x + y) / 2);
        }

        printf("%ld\n", *ms.begin());
    }

}
