#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

struct marble{ll a, b, c, r;};

bool mcompare(marble x, marble y){

    if(x.a < y.a){return true;}
    else if(x.a == y.a && x.b < y.b){return true;}
    else if(x.a == y.a && x.b == y.b && x.c < y.c){return true;}
    else if(x.a == y.a && x.b == y.b && x.c == y.c && x.r <= y.r){return true;}
    return false;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<marble> a;
    std::pair<ll, ll> ans; ll mx(0);

    for(long p = 1; p <= n; p++){
        std::vector<ll> v(3); scanf("%lld %lld %lld", &v[0], &v[1], &v[2]);
        sort(v.begin(), v.end());
        if(v[0] > mx){ans = std::make_pair(p, -1); mx = v[0];}
        marble m1; m1.a = v[0]; m1.b = v[1]; m1.c = v[2]; m1.r = p; a.push_back(m1);
        marble m2; m2.a = v[0]; m2.b = v[2]; m2.c = v[1]; m2.r = p; a.push_back(m2);
        marble m3; m3.a = v[1]; m3.b = v[2]; m3.c = v[0]; m3.r = p; a.push_back(m3);
    }

    sort(a.begin(), a.end(), mcompare);
    for(long p = 1; p < a.size(); p++){
        marble x = a[p - 1]; marble y = a[p];
        if((x.a != y.a) || (x.b != y.b)){continue;}
        if(x.r == y.r){continue;}
        //printf("a:%lld b:%lld c:%lld r:%lld with  ", x.a, x.b, x.c, x.r);
        //printf("a:%lld b:%lld c:%lld r:%lld \n", y.a, y.b, y.c, y.r);
        ll cc = x.c + y.c;
        ll mn(cc); mn = (mn < x.a) ? mn : x.a; mn = (mn < x.b) ? mn : x.b;
        if(mn > mx){mx = cc; ans = std::make_pair(x.r, y.r);}
    }

    if(ans.second == -1){printf("1\n%lld\n", ans.first);}
    else{printf("2\n%lld %lld\n", ans.first, ans.second);}

    return 0;
}
