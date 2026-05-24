#include <cstdio>
#include <vector>
#include <algorithm>
#include <deque>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::vector<std::pair<int, long> > v;
    long right(0);
    for(long p = 0; p < m; p++){
        int t; long r; scanf("%d %ld", &t, &r); --r;
        right = (right > r) ? right : r;
        while(!v.empty() && v.back().second <= r){v.pop_back();}
        if(!v.empty() && v.back().first == t){continue;}
        v.push_back(std::make_pair(t, r));
    }

    std::deque<long> d;
    std::vector<long> b;
    for(long p = n - 1; p >= 0; p--){
        if(p > right){b.push_back(a[p]);}
        else{d.push_back(a[p]);}
    }

    sort(d.begin(), d.end());

    for(long p = 0; p < v.size(); p++){
        int t = v[p].first; long r = v[p].second;
        long q = (p + 1 < v.size()) ? v[p + 1].second : -1;
        long diff = r - q;
        while(diff--){
            if(d.empty()){break;}
            if(t == 1){b.push_back(d.back()); d.pop_back();}
            else{b.push_back(d.front()); d.pop_front();}
        }
    }

    for(long p = n - 1; p >= 0; p--){printf("%ld ", b[p]);}
    puts("");

    return 0;
}
