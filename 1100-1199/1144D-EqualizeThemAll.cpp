#include <cstdio>
#include <vector>
#include <map>

struct action{long w, from, to;};

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); std::map<long,long> cm; 
    long target(0), pos(-1), mx(-1);
    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]);
        ++cm[a[p]];
        if(cm[a[p]] > mx){mx = cm[a[p]]; target = a[p]; pos = p;}
    }

    std::vector<action> res;
    for(long p = pos + 1; p < n; p++){
        if(a[p] == target){continue;}
        action x; x.w = 1 + (a[p] > target); x.from = p; x.to = p + 1;
        res.push_back(x);
    }

    for(long p = pos - 1; p >= 0; p--){
        if(a[p] == target){continue;}
        action x; x.w = 1 + (a[p] > target); x.from = p + 2; x.to = p + 1;
        res.push_back(x);
    }

    printf("%ld\n", res.size());
    for(long p = 0; p < res.size(); p++){printf("%ld %ld %ld\n", res[p].w, res[p].to, res[p].from);}
    puts("");

    return 0;
}
