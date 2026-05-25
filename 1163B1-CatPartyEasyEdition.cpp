#include <cstdio>
#include <vector>
#include <map>

bool check(std::map<long, long> &m, long val){
    bool disagree(false);
    for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
        if(it->second == val){continue;}
        if((it->second == val + 1) || (it->second == 1)){
            if(disagree){return false;}
            disagree = true;
        }
        else{return false;}
    }

    return disagree;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::map<long, long> m;
    long res(0);
    for(long p = 0; p < n; p++){
        long col = a[p];
        ++m[col];
        long cnt = m.size();
        if(cnt == 1){res = p + 1;}
        else if(cnt >= p){res = p + 1;}
        else if((p % cnt == 0) && check(m, p / cnt)){res = p + 1;}
        else if((p % (cnt - 1) == 0) && check(m, p / (cnt - 1))){res = p + 1;} 
    }

    printf("%ld\n", res);

    return 0;
}
