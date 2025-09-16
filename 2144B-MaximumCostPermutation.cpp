#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); std::set<long> s; 
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]); s.insert(p + 1);}
        for(long p = 0; p < n; p++){if(v[p]){s.erase(v[p]);}}
        for(long p = n - 1; p >= 0; p--){if(!v[p]){v[p] = *s.begin(); s.erase(s.begin());}}

        long left(n), right(-1);
        for(long p = 0; p < n; p++){if(v[p] != p + 1){left = p; break;}}
        for(long p = n - 1; p >= 0; p--){if(v[p] != p + 1){right = p; break;}}

        printf("%ld\n", (left < right) ? (right - left + 1) : 0);
    }

}
