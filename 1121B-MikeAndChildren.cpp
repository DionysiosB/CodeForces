#include <cstdio>
#include <map>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::set<long> s, t;
    std::map<long, long> w;

    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){t.insert(a + *it);}
        s.insert(a);
        ++w[a];
    }

    long mx(0);
    for(std::set<long>::iterator sit = t.begin(); sit != t.end(); sit++){
        long candsum = *sit;
        long tmp(0);
        for(std::map<long, long>::iterator mit = w.begin(); mit != w.end(); mit++){
            long x = mit->first;
            long y = mit->second;
            if(!w.count(candsum - x)){continue;}
            long z = w[candsum - x];
            tmp += (y < z) ? y : z;
        }
        mx = (mx > tmp) ? mx : tmp;
    }

    printf("%ld\n", mx);

    return 0;
}
