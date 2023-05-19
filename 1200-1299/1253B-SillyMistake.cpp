#include <cstdio>
#include <vector>
#include <set>

int main(){

    std::set<long> a, b;
    std::vector<long> d;
    long n; scanf("%ld", &n);
    bool res(true);
    long cnt(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        ++cnt;
        if(x > 0){
            if(b.count(x)){res = false; break;}
            a.insert(x); b.insert(x);
        }
        else{
            if(!(a.count(-x))){res = false; break;}
            a.erase(-x);
            if(a.size() == 0){d.push_back(cnt); cnt = 0; b.clear();}
        }
    }

    if(cnt > 0){res = false;}

    if(res){
        printf("%ld\n", d.size());
        for(long p = 0; p < d.size(); p++){printf("%ld ", d[p]);}
    }
    else{puts("-1");}


    return 0;
}
