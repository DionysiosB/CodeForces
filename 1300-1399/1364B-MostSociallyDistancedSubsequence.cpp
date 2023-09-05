#include <cstdio>
#include <vector>

int main(){
    long t; scanf("%ld",&t);
    while (t--){
        long n; scanf("%ld",&n);
        std::vector<long> a(n); for(long p = 0;p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> ans;
        for (long p = 0; p < n; p++){
            if(p == 0 || p + 1 == n || (a[p - 1] < a[p]) != (a[p] < a[p + 1])){ans.push_back(a[p]);}
        }

        printf("%ld\n",ans.size());
        for(long p = 0; p < ans.size(); p++){printf("%ld ", ans[p]);}
        puts("");
    }

    return 0;
}
