#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    long sum(0), mn(101);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]);
        mn = (mn < a[p]) ? mn : a[p];
        sum += a[p];
    }

    long diff(0);
    for(long p = 0; p < n; p++){
        long b = a[p];
        for(long u = 1; u <= b; u++){
            if(b % u){continue;}
            long tmp = (u - 1) * mn - (u - 1) * b / u;
            diff = (diff < tmp) ? diff : tmp;
        }
    }

    printf("%ld\n", sum + diff);

    return 0;
}
