#include <cstdio>
#include <vector>

int main(){

    const long M = 3;
    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > a(n);

    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a[x].push_back(p);}

    std::vector<long> order;
    long count(0);
    bool possible(true);
    for(long p = 0; p < n; p++){
        while(count >= 0 && a[count].size() == 0){count -= M;}
        if(count < 0){possible = false; break;}
        order.push_back(a[count].back()); a[count].pop_back(); 
        ++count;
    }

    puts(possible ? "Possible" : "Impossible");
    if(possible){for(long p = 0; p < order.size(); p++){printf("%ld ", 1 + order[p]);}; puts("");}

    return 0;
}
