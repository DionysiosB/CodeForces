#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){std::cin >> v[p].second;}
        std::string s; std::cin >> s;
        long left(0), right(n - 1);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'L'){v[left++].first = n - p;}
            else{v[right--].first = n - p;}
        }

        sort(v.begin(), v.end());
        std::vector<long> w(n);
        long cur(1);
        for(long p = 0; p < n; p++){
            cur *= v[p].second; cur %= m;
            w[n - 1 - p] = cur;
        }

        for(long p = 0; p < n; p++){printf("%ld ", w[p]);}
        puts("");
    }

}
