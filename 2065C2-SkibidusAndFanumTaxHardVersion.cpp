#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(n); for(size_t p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(m); for(size_t p = 0; p < m; p++){scanf("%ld", &b[p]);}

        sort(b.begin(), b.end());

        bool res(true);
        a[0] = std::min(a[0], b[0] - a[0]);
        for(size_t p = 1; res && p < n; p++){
            std::vector<long>::iterator fb = std::lower_bound(b.begin(), b.end(), a[p - 1] + a[p]);
            if(fb == b.end()){
                if(a[p - 1] > a[p]){res = false; break;}
                continue;
            }

            if(a[p - 1] <= a[p] && a[p - 1] <= *fb - a[p]){a[p] = std::min(a[p], *fb - a[p]);}
            else if(a[p - 1] <= a[p]){}
            else if(a[p - 1] <= *fb - a[p]){a[p] = *fb - a[p];}
            else{res = false;}
        }

        puts(res ? "YES" : "NO");
    }

}
