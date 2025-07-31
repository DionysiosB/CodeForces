#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::vector<long> > v(n, std::vector<long>(3, 0));
        for(long p = 0; p < n; p++){for(int u = 0; u < 3; u++){scanf("%ld", &v[p][u]);}}
        sort(v.begin(), v.end());

        for(long p = 0; p < n; p++){
            if(k < v[p][0]|| k > v[p][1]){continue;}
            k = (k > v[p][2] ? k : v[p][2]);
        }

        printf("%ld\n", k);
    }

}
