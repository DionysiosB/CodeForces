#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); 
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long rem(0); bool state(0);
        for(long p = n - 2; p >= 0; p--){
            if(!state && a[p] >= a[p + 1]){continue;}
            else if(!state && a[p] <= a[p + 1]){state = true;}
            else if(state && a[p] <= a[p + 1]){continue;}
            else if(state && a[p] > a[p + 1]){rem = p + 1; break;}
        }

        printf("%ld\n", rem);
    }

    return 0;
}
