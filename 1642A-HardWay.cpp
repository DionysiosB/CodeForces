#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::vector<std::pair<long, long> > v(3);
        for(long p = 0; p < 3; p++){scanf("%ld %ld", &v[p].second, &v[p].first);}
        sort(v.rbegin(), v.rend());
        double res = (v[0].first == v[1].first) ? (v[0].second - v[1].second) : 0.0;
        printf("%.9lf\n", res);
    }

}
