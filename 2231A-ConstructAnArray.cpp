#include <cstdio>
#include <vector>
#include <unordered_set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<bool> v(2 * n + 3, 0);
        std::unordered_set<long> s;
        long prev(0), idx(1);

        for(long p = 1; p <= n; p++){
            while(idx < v.size() && v[idx]){++idx; continue;}
            s.insert(idx);
            if(prev + idx < v.size()){v[prev + idx] = 1;}
            printf("%ld ", idx);
            prev = idx++;   // No need to set v[idx] = 1 really
        }

        puts("");
    }

}
