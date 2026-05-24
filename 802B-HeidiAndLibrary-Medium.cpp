#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n + 1, 0), next(n + 1, n + 1), last(n + 1, n + 1);

    for(int p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(int p = n - 1; p >= 0; p--){next[p] = last[a[p]]; last[a[p]] = p;}

    long cost(0);
    std::set<long> s;

    for(int p = 0; p < n; p++){
        if(s.count(p)){s.erase(p);}
        else{++cost;}

        if(s.size() >= k){s.erase(--s.end());}
        s.insert(next[p]);
    }

    printf("%ld\n",cost);

    return 0;
}
