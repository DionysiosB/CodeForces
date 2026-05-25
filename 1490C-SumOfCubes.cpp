#include <cstdio>
typedef long long ll;

bool isCube(ll num){

    ll left(1), right(10007);
    while(left <= right){
        ll mid = (left + right) / 2;
        ll cube = mid * mid * mid;
        //printf("Left:%lld\tRight:%lld\tMid:%lld\tCube:%lld\n", left, right, mid, cube);
        if(cube == num){return true;}
        else if(cube < num){left = mid + 1;}
        else if(cube > num){right = mid - 1;}
    }

    return false;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        bool ans(false);
        for(ll p = 1; p * p * p <= x; p++){
            ll y = x - p * p * p;
            //printf("%lld %lld\n", p, y);
            if(isCube(y)){ans = true; break;}
        }

        puts(ans ? "YES" : "NO");
    }

}
