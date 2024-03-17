#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, g; scanf("%ld %ld %ld", &a, &b, &g);
        long div(1); std::set<long> s;
        while(g % div == 0){
            long cur = g / div;
            s.insert(cur);
            while(cur % a == 0){s.insert(cur / a); cur /= a;}
            div *= b;
        }

        printf("%ld\n", s.size());
    }

}
