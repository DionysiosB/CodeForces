#include <cstdio>
#include <algorithm>
#include <vector>

bool compare(request first, request second){return first.sum > second.sum;}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld %ld", &v[p].first, &v[p].second);}
    }

}
