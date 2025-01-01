
#include <cstdio>
typedef long long ll;
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll nc(1);
        while(n >= 4){nc *= 2; n /= 4;}
        printf("%lld\n", nc);
    }
    
}
