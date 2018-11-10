#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    std::multiset<ll> s;
    for(long p = 0; p < n; p++){ll x; scanf("%lld", &x); s.insert(x);}
    if(s.size() % 2 == 0){s.insert(0);}
    ll penalty(0);
    while(s.size() > 2){
        ll x = *(s.begin()); s.erase(s.begin());
        ll y = *(s.begin()); s.erase(s.begin());
        ll z = *(s.begin()); s.erase(s.begin());
        penalty += (x + y + z);
        s.insert(x + y + z);
    }

    printf("%lld\n", penalty);

    return 0;
}
