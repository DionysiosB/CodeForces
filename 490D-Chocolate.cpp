#include <cstdio>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    ll a1, b1, a2, b2; scanf("%lld %lld %lld %lld", &a1, &b1, &a2, &b2);
    ll x1 = a1 * b1; while(x1 % 2 == 0){x1 /= 2;}; while(x1 % 3 == 0){x1 /= 3;}
    ll x2 = a2 * b2; while(x2 % 2 == 0){x2 /= 2;}; while(x2 % 3 == 0){x2 /= 3;}

    if(x1 != x2){puts("-1");}
    else{
        ll t1(0), h1(0), t2(0), h2(0);
        x1 = a1 * b1; x2 = a2 * b2; ll g = gcd(x1, x2);
        x1 /= g; x2 /= g;
        while(x1 % 2 == 0){++t1; x1 /= 2;} while(x1 % 3 == 0){++h1; x1 /= 3;}
        while(x2 % 2 == 0){++t2; x2 /= 2;} while(x2 % 3 == 0){++h2; x2 /= 3;}

        ll steps(0);
        while(h1 > 0){
            --h1; ++t1; ++steps;
            if(a1 % 3 == 0){a1 /= 3; a1 *= 2;}
            else if(b1 % 3 == 0){b1 /= 3; b1 *= 2;}
        }
        while(h2 > 0){
            --h2; ++t2; ++steps;
            if(a2 % 3 == 0){a2 /= 3; a2 *= 2;}
            else if(b2 % 3 == 0){b2 /= 3; b2 *= 2;}
        }

        while(t1 != t2){
            ++steps;
            if(t1 > t2){--t1; if(a1 % 2 == 0){a1 /= 2;} else{b1 /= 2;}}
            else{--t2; if(a2 % 2 == 0){a2 /= 2;} else{b2 /= 2;}}
        }

        printf("%lld\n", steps);
        printf("%lld %lld\n%lld %lld\n", a1, b1, a2, b2);
    }

    return 0;
}
