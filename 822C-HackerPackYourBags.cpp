#include <cstdio>
#include <vector>
#include <algorithm>

struct vac{long start, finish, cost;};
bool vacCompare(vac a, vac b){
    if(a.start < b.start){return true;}
    else if(a.start == b.start){return a.finish < b.finish;}
    return false;
}

int main(){

    const long D = 200010;
    std::vector<std::vector<vac> > a(D);
    long n, x; scanf("%ld %ld", &n, &x);
    for(long p = 0; p < n; p++){
        long l, r, c; scanf("%ld %ld %ld", &l, &r, &c);
        vac v; v.start = l; v.finish = r; v.cost = c;
        a[r - l + 1].push_back(v);
    }

    for(long p = 0; p < D; p++){sort(a[p].begin(), a[p].end(), vacCompare);}

    long minCost(2e9 + 10);
    for(long d = 1; d < x && d < D; d++){
        long f = x - d;
        for(long p = 0; p < a[d].size(); p++){
            for(long q = 0; q < a[f].size(); q++){
                if(a[d][p].finish >= a[f][q].start){continue;}
                long sum = a[d][p].cost + a[f][q].cost;
                minCost = (minCost < sum) ? minCost : sum;
            }
        }
    }

    printf("%ld\n", (minCost > 2e9 + 5) ? -1 : minCost);

    return 0;
}
