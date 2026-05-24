#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::multiset<int> ms;
    ll x(n), cnt(0); 
    while(x > 0){
        if(x % 2){ms.insert(cnt);}
        x /= 2; ++cnt;
    }

    if(ms.size() > k){puts("No");}
    else{
        while(ms.size() < k){
            long u = *ms.rbegin();
            ms.erase(ms.find(u));
            ms.insert(u - 1); ms.insert(u - 1);
        }

        std::vector<int> v;
        for(std::multiset<int>::reverse_iterator it = ms.rbegin(); it != ms.rend(); it++){v.push_back(*it);}
        puts("Yes");
        for(long p = 0; p < v.size(); p++){printf("%d ", v[p]);}; puts("");
    }

    return 0;
}
