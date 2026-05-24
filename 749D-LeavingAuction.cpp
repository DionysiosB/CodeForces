#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::map<long, std::vector<long> > bm;
    while(n--){
        long a, b; scanf("%ld %ld", &a, &b);
        bm[a].push_back(b);
    }

    std::vector<std::pair<long, long> > v;
    for(std::map<long, std::vector<long> >::iterator it = bm.begin(); it != bm.end(); it++){v.push_back(std::make_pair(it->second.back(), it->first));}
    sort(v.begin(), v.end());

    long q; scanf("%ld", &q);
    while(q--){
        long k; scanf("%ld", &k);
        std::set<long> absent;
        for(long p = 0; p < k; p++){long x; scanf("%ld", &x); absent.insert(x);}

        long winner(-1), runnerup(-1);
        for(long p = v.size() - 1; p >= 0; p--){
            long x = v[p].second;
            if(absent.count(x)){continue;}
            else if(winner < 0){winner = x;}
            else if(runnerup < 0){runnerup = x;}
            else{break;}
        }

        if(winner < 0){puts("0 0");}
        else if(runnerup < 0){printf("%ld %ld\n", winner, bm[winner][0]);}
        else{
            long minValue = bm[runnerup].back();
            std::vector<long> wbl = bm[winner];
            long left(0), right(wbl.size() - 1), wb(0);
            while(left <= right){
                long mid = (left + right) / 2;
                if(wbl[mid] > minValue){wb = wbl[mid]; right = mid - 1;}
                else{left = mid + 1;}
            }

            printf("%ld %ld\n", winner, wb);
        }
    }

    return 0;
}
