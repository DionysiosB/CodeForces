#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n(0), k(0); scanf("%ld %ld", &n, &k);

    std::vector<long> initial(n, 0);
    std::map<long, long> counts;
    int diff(0), maxDiff(0), maxCount(0);

    for(long u = 0; u < n; u++){
        scanf("%ld", &initial[u]);
        long diff = initial[u] - k * u;
        if(diff > 0){
            if(counts.find(diff) == counts.end()){counts.insert(std::pair<long,long>(diff, 1));}
            else{++counts[diff];}

            if(counts[diff] > maxCount){maxDiff = diff; maxCount = counts[diff];}
        }
    }

    printf("%ld\n", n - maxCount);
    for(long u = 0; u < n; u++){
        long height = maxDiff + k * u;
        if(initial[u] < height){printf("+ %ld %ld\n", u + 1, height - initial[u]);}
        else if(initial[u] > height){printf("- %ld %ld\n", u + 1, initial[u] - height);}
    }

    return 0;
}
