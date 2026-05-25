#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n, 0);
        std::set<std::pair<long, std::pair<long, long> > > s;
        s.insert(std::make_pair(n, std::make_pair(0, n - 1)));
        long cnt(0);
        while(!s.empty()){
            std::pair<long, std::pair<long, long> > cur = *s.begin();
            s.erase(s.begin());
            long left = cur.second.first;
            long right = cur.second.second;
            long mid = (left + right) / 2;
            a[mid] = ++cnt;
            if(left < mid){s.insert(std::make_pair(-(mid - left + 1), std::make_pair(left, mid - 1)));}
            if(mid < right){s.insert(std::make_pair(-(right - mid + 1), std::make_pair(mid + 1, right)));}
        }

        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

    return 0;
}
