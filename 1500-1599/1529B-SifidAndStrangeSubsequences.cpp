#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> neg;
        long mn(1e9+7);
        bool extra(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x <= 0){neg.push_back(x);}
            else if(x < mn){extra = true; mn = x;}
        }

        sort(neg.begin(), neg.end());
        for(long p = 1; p < neg.size(); p++){
            if(neg[p] - neg[p - 1] < mn){extra = false; break;}
        }

        printf("%ld\n", neg.size() + extra);
    }

}
