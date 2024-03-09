#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long left(1); while(left < n && a[left] == a[0]){++left;}
        long right(1); while(right + 1 <= n && a[n - 1 - right] == a.back()){++right;}

        long s(left > right ? left : right);
        if(a[0] == a.back()){s = left + right;}
        s = (s < n ? s : n);
        printf("%ld\n", n - s);
    }

}
