#include <cstdio>
#include <vector>
#include <deque>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        if(a[0] != n && a.back() != n){puts("-1"); continue;}
        std::deque<long> d;
        long left(0), right(n - 1);
        while(left <= right){
            if(a[left] < a[right]){d.push_front(a[left]); ++left;}
            else{d.push_back(a[right]); --right;}
        }

        for(long p = 0; p < d.size(); p++){printf("%ld ", d[p]);}
        puts("");
    }

}
