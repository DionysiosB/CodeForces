#include <cstdio>
#include <map>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> bids;
        std::set<long> dupes;

        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(bids.count(x)){bids.erase(x); dupes.insert(x);}
            else if(!dupes.count(x)){bids[x] = p;}
        }

        printf("%ld\n", bids.size() ? bids.begin()->second : -1);
    }
}
