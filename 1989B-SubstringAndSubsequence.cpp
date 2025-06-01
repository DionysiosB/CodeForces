#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string a; std::cin >> a;
        std::string b; std::cin >> b;
        long cnt(a.size() + b.size());

        for(long start = 0; start < b.size(); start++){
            long idx = start;
            for(int p = 0; p < a.size(); p++){
                if(idx < b.size() && a[p] == b[idx]){++idx;}
            }
            long total = a.size() + start + (b.size() - idx);
            cnt = (cnt < total ? cnt : total);
        }

        printf("%ld\n", cnt);
    }

}
