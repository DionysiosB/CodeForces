#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v; std::set<long> s;
        
        long pos(0), neg(0), z(0);
        bool possible(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(!x){++z; continue;}
            v.push_back(x); s.insert(x);
            pos += (x > 0); neg += (x < 0);
            if(pos > 2 || neg > 2){possible = false;}
        }

        if(z){v.push_back(0); s.insert(0);}
        if(z > 1){v.push_back(0); s.insert(0);}

        for(long p = 0; possible && p < v.size(); p++){
            for(long q = p + 1; possible && q < v.size(); q++){
                for(long r = q + 1; possible && r < v.size(); r++){
                    if(!s.count(v[p] + v[q] + v[r])){possible = false;}
                }
            }
        }

        puts(possible ? "YES" : "NO");
    }

}
