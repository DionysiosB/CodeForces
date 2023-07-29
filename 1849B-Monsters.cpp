#include <cstdio>
#include <vector>
#include <algorithm>

bool pairCompare(std::pair<long, long> a, std::pair<long, long> b){
    if(a.first == b.first){return a.second < b.second;}
    else if(a.first == 0){return true;}
    else if(b.first == 0){return false;}
    else return a.first > b.first;
    return true; //redundant
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::pair<long, long> > a(n);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            a[p] = std::make_pair(x % k, p + 1);
        }

        sort(a.begin(), a.end(), pairCompare);

        for(long p = 0; p < n; p++){printf("%ld ", a[p].second);}
        puts("");
    }

}
