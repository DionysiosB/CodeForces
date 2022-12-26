#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


bool comp(std::pair<long, long> a, std::pair<long, long> b){

    long la = a.first; long lla = 2 * a.first; long ra = a.second; 
    long ma = (la < ra) ? la : ra; long mma = (lla < ra) ? lla : ra;
    long fa = mma - ma;

    long lb = b.first; long llb = 2 * b.first; long rb = b.second; 
    long mb = (lb < rb) ? lb : rb; long mmb = (llb < rb) ? llb : rb;
    long fb = mmb - mb;

    return (fa > fb);

}


int main(){
    
    long n, f; scanf("%ld %ld", &n, &f);
    std::vector<std::pair<long, long> > a(n);
    for(long p = 0; p < n; p++){
        long k, l; scanf("%ld %ld", &k, &l);
        a[p] = std::make_pair(k, l);
    }

    sort(a.begin(), a.end(), comp);
    int64_t total(0);
    for(long p = 0; p < n; p++){
        if(p < f){a[p].first *= 2;}
        total += (a[p].first < a[p].second) ? a[p].first : a[p].second;
    }

    printf("%lld\n", total);

    return 0;
}
