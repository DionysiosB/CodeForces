#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long left(0), right(n - 1), mn(1), mx(n);
        while(left < right){
            if(a[left] == mn){++left; ++mn;}
            else if(a[right] == mn){--right; ++mn;}
            else if(a[left] == mx){++left; --mx;}
            else if(a[right] == mx){--right; --mx;}
            else{break;}
        }

        if(left < right){printf("%ld %ld\n", left + 1, right + 1);}
        else{puts("-1");}
    }

}
