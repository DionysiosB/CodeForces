#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    const double PI = 3.14159265358979;
    long n; scanf("%ld",&n);
    std::map<ll,ll>M; M[0]=0;

    while(n--){

        ll radius, height; scanf("%lld %lld", &radius, &height);
        ll prod = radius * radius * height;
        std::map<ll,ll>::iterator left, right;
        left = M.lower_bound(prod); right = left;
        ll cnt =(--right)->second + prod; right = left;
        while(right != M.end() && (right->second <= cnt)){++right;}
        M.erase(left, right);
        M[prod] = cnt; 
    }

    printf("%.8lf\n", PI * (--M.end())->second);

    return 0;
}
