#include <cstdio>
#include <vector>
#include <stack>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> dv(n), bl(n), bh(n);
        for(long p = 0; p < n; p++){scanf("%ld", &dv[p]);}
        for(long p = 0; p < n; p++){scanf("%ld %ld", &bl[p], &bh[p]);}

        bool possible(true);
        std::stack<long> s;
        long h(0);

        for(long p = 0; possible && p < n; p++){
            if(dv[p] < 0){s.push(p);}
            else{h += dv[p];}
            while(!s.empty() && h < bl[p]){dv[s.top()] = 1; ++h; s.pop();}
            if(h < bl[p] || h > bh[p]){possible = false; break;}
            while(h + s.size() > bh[p]){dv[s.top()] = 0; s.pop();}
        }

        if(!possible){puts("-1"); continue;}

        while(!s.empty()){dv[s.top()] = 0; s.pop();}
        for(long p = 0; p < n; p++){printf("%ld ", dv[p]);}
        puts("");
    }

}
