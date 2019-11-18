#include <cstdio>
#include <vector>
typedef long long ll;


bool arrogant(ll ind, std::vector<ll> team){
    const int B = 60;
    if(team[ind] < 0){return false;}
    for(ll p = 0; p < team.size(); p++){
        if(team[p] < 0){continue;}
        if(p == ind){continue;}
        ll a(team[ind]), b(team[p]);
        bool better(false);
        while(a > 0 || b > 0){
            if((a & 1) && (b % 2 == 0)){better = true; break;}
            a /= 2; b /= 2;
        }
        if(!better){return false;}
    }

    return true;
}

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n), b(n);
    ll sum(0), cnt(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    for(ll p = 0; p < n; p++){scanf("%lld", &b[p]); sum += b[p];}


    bool done(false);
    while(!done){
        done = true;
        for(ll p = 0; p < n; p++){
            if(a[p] < 0){continue;}
            if(arrogant(p, a)){done = false; --cnt; a[p] = -1; sum -= b[p];}
        }
    }

    printf("%lld\n", cnt > 1 ? sum : 0);

    return 0;
}
