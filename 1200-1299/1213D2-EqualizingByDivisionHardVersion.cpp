#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::map<long, std::vector<long> > m;
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        long cnt(0);
        while(x){
            m[x].push_back(cnt);
            ++cnt; x /= 2; 
        }
        m[0].push_back(cnt);
    }

    long res(100 * n);
    for(std::map<long, std::vector<long> >::iterator it = m.begin(); it != m.end(); it++){
        std::vector<long> v = it->second;
        if(v.size() < k){continue;}
        sort(v.begin(), v.end());
        long s(0);
        for(long p = 0; p < k; p++){s += v[p];}
        res = (res < s) ? res : s;
    }

    printf("%ld\n", res);

    return 0;
}
