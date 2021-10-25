#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll m; scanf("%lld", &m);
    std::vector<ll> b(m); for(ll p = 0; p < m; p++){scanf("%lld", &b[p]);}

    ll x(0), y(0), cura(0), curb(0), cnt(0);
    while(x < n || y < m){
        if(cura == curb && x < n && y < m){cura = a[x++]; curb = b[y++]; ++cnt;}
        else if(cura == curb && (x >= n || y >= m)){break;}
        else if(cura < curb && x < n){cura += a[x++];}
        else if(cura < curb && x >= n){break;}
        else if(curb < cura && y < m){curb += b[y++];}
        else if(curb < cura && y >= m){break;}
        //printf("*** %lld %lld %lld %lld %lld\n", x, y, cura, curb, cnt);
    }

    if(x < n || y < m || cura != curb){cnt = -1;}
    printf("%lld\n", cnt);

    return 0;
}
