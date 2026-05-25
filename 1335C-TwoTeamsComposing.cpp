#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::map<long, long> m;
        long n; scanf("%ld", &n);
        long mx(0);
        while(n--){long a; scanf("%ld", &a); ++m[a]; mx = (mx > m[a]) ? mx : m[a];}
        long d(m.size()), res(0);
        if(d == mx){res = d - 1;}
        else{res = (d < mx) ? d : mx;}
        printf("%ld\n", res);
    }

    return 0;
}
