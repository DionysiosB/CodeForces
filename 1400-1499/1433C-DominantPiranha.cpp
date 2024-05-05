#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(0), mn(2e9 + 7);
        std::vector<long> a(n); for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]); 
            mn = (mn < a[p]) ? mn : a[p];
            mx = (mx > a[p]) ? mx : a[p];
        }

        long where(-1);
        if(mn == mx){puts("-1"); continue;}
        if(a[0] == mx && a[1] < mx){where = 1;}
        else if(a[n - 1] == mx && a[n - 2] < mx){where = n;}
        else{for(long p = 1; p + 1 < n; p++){if((a[p] == mx) && (a[p - 1] < mx || a[p + 1] < mx)){where = p + 1; break;}}}
        printf("%ld\n", where);
    }

    return 0;
}
