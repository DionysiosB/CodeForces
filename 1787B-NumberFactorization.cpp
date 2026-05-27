#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > div; 
        for(long p = 2; p * p <= n; p++){
            if(n % p){continue;}
            div.push_back(std::make_pair(0, p));
            while(n % p == 0){++div.back().first; n /= p;}
        }
        if(n > 1){div.push_back(std::make_pair(1, n));}

        sort(div.rbegin(), div.rend());

        long total(0);
        while(!div.empty()){
            long cur(1);
            for(long p = 0; p < div.size(); p++){cur *= div[p].second; --div[p].first;}
            total += cur;
            while(!div.empty() && div.back().first <= 0){div.pop_back();}
        }

        printf("%ld\n", total);
    }

}
