#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s; std::vector<long> v;
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(s.count(a)){v.push_back(a);}
            else{s.insert(a);}
        }

        for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){printf("%ld ", *it);}
        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

}
