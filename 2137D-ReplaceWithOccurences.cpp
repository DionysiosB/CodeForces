#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, std::vector<long> > m;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            m[x].push_back(p);
        }

        bool possible(true);
        for(std::pair<long, std::vector<long> > f : m){
            long key = f.first;
            long len = f.second.size();
            if(len % key){possible = false; break;}
        }

        if(!possible){puts("-1"); continue;}

        long num(0); std::vector<long> v(n);
        for(std::pair<long, std::vector<long> > f : m){
            long key = f.first;
            std::vector<long> w = f.second;
            for(long p = 0; p < w.size(); p++){
                if(p % key == 0){++num;} 
                v[w[p]] = num;
            }
        }

        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

}
