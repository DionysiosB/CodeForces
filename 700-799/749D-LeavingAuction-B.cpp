#include <cstdio>
#include <vector>
#include <algorithm>

struct person{long id; std::vector<long> bids; long maxBid;};
bool personCompare(person A, person B){return A.maxBid < B.maxBid;}

int main(){

    long n; scanf("%ld", &n);
    std::vector<person> v(n + 1);
    for(long p = 0; p < v.size(); p++){v[p].id = p;}
    for(long p = 0; p < n; p++){
        long a, b; scanf("%ld %ld", &a, &b);
        v[a].bids.push_back(b);
        v[a].maxBid = b;
    }

    sort(v.begin(), v.end(), personCompare);

    std::vector<long> mp(n + 1);
    for(long p = 0; p <= n; p++){mp[v[p].id] = p;}

    long q; scanf("%ld", &q);
    while(q--){
        long k; scanf("%ld", &k);
        std::vector<bool> present(n + 1, 1);
        for(long p = 0; p < k; p++){long x; scanf("%ld", &x); present[x] = 0;}

        if(k == n){puts("0 0"); continue;}

        long winner(0), runnerup(0);
        for(long p = n; p > 0; p--){
            if(!present[v[p].id]){continue;}
            else if(v[p].bids.size() <= 0){break;}
            else if(winner <= 0){winner = p;}
            else if(runnerup <= 0){runnerup = p;}
            else{break;}
        }

        if(winner <= 0){puts("0 0");}
        else if(runnerup <= 0){printf("%ld %ld\n", v[winner].id, v[winner].bids[0]);}
        else{
            long minValue = v[runnerup].maxBid;
            std::vector<long> wbl = v[winner].bids;
            long left(0), right(wbl.size() - 1), wb(0);
            while(left <= right){
                long mid = (left + right) / 2;
                if(wbl[mid] > minValue){wb = wbl[mid]; right = mid - 1;}
                else{left = mid + 1;}
            }

            printf("%ld %ld\n", v[winner].id , wb);
        }
    }

    return 0;
}
