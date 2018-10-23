#include<iostream>
#include<vector>
#include<set>
#include<cmath>

int main(){

    int64_t n, k, x; scanf("%lld %lld %lld", &n, &k, &x); 
    std::vector<int64_t> a(n);
    std::set<std::pair<int64_t,int64_t> > s;
    int64_t z(1);

    for(int64_t p = 0; p < n; p++){
        scanf("%lld", &a[p]);
        if(a[p]<0){z = -z;}
        s.insert(std::make_pair(std::abs(a[p]),p));
    }

    for(int64_t p = 0; p < k; p++){
        int64_t pos = s.begin()->second;

        s.erase(s.begin());
        if(a[pos] < 0){z = -z;}

        if(z > 0){a[pos] -= x;} else{a[pos] += x;}

        s.insert(std::make_pair(std::abs(a[pos]),pos));
        if(a[pos]<0){z = -z;}
    }

    for(int64_t p = 0; p < n; p++){printf("%lld ", a[p]);}
     
    return 0;
}
