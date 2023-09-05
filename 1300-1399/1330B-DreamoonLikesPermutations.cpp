#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        std::set<long> s;
        std::set<long> left;
        long mx(0);
        for(long p = 0; p < n; p++){
            if(s.count(a[p])){break;}
            s.insert(a[p]);
            mx = (mx > a[p]) ? mx : a[p];
            if(s.size() == mx){left.insert(p);}
        }

        std::set<long> t;
        mx = 0;
        std::vector<long> ans;
        for(long p = n - 1; p >= 0; p--){
            if(t.count(a[p])){break;}
            t.insert(a[p]);
            mx = (mx > a[p]) ? mx : a[p];
            if(t.size() == mx && left.count(p - 1)){ans.push_back(p);}
        }

        printf("%ld\n", ans.size());
        for(long p = 0; p < ans.size(); p++){printf("%ld %ld\n", ans[p], n - ans[p]);}

    }

    return 0;
}
