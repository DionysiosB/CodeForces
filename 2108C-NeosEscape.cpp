#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v;

        v.push_back(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(v.back() == x){continue;}
            v.push_back(x);
        }
        v.push_back(-1);

        long cnt(0);
        for(long p = 1; p + 1 < v.size(); p++){
            cnt += (v[p - 1] < v[p] && v[p] > v[p + 1]);
        }

        printf("%ld\n", cnt);
    }

}
