#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x)){s.insert(-x);}
            else{s.insert(x);}
        }

        printf("%ld\n", s.size());
    }

}
