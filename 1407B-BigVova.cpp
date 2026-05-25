#include <cstdio>
#include <vector>
#include <set>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::multiset<long> a; std::vector<long> b;

        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a.insert(x);}
        long last(0);

        while(!a.empty()){
            long best(0), argbest(0);
            for(std::multiset<long>::iterator it = a.begin(); it != a.end(); it++){
                long test = gcd(last, *it);
                if(test >= best){best = test; argbest = *it;}
            }

            b.push_back(argbest);
            a.erase(a.find(argbest));
            last = gcd(last, argbest);
        }

        for(long p = 0; p < b.size(); p++){printf("%ld ", b[p]);}
        puts("");
    }

    return 0;
}
