#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); long x(0); bool sorted(true);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(a[p] < x){sorted = false;}
            x = a[p];
        }

        if(a[0] == 1 && a.back() == n && sorted){puts("0");}
        else if(a[0] == 1 || a.back() == n){puts("1");}
        else if(a[0] == n && a.back() == 1){puts("3");}
        else{puts("2");}
    }

}
