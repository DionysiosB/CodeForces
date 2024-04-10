#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, c, d; scanf("%ld %ld %ld", &n, &c, &d);

        std::vector<long> b(n * n);
        for(int p = 0; p < b.size(); p++){scanf("%ld", &b[p]);}
        sort(b.begin(), b.end());

        std::vector<long> v;
        for(int row = 0; row < n; row++){for(int col = 0; col < n; col++){v.push_back(row * c + col * d);}}
        sort(v.begin(), v.end());

        bool ans(true);
        for(int p = 0; ans && p < n * n; p++){
            if(b[0] + v[p] != b[p]){ans = false;}
        }

        puts(ans ? "YES" : "NO");
    }

}
