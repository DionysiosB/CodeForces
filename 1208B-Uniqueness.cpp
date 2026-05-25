#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, -1); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long mn(n + 1);
    long left(0); std::set<long> s; long right(n - 1);
    for(long p = 0; p <= n; p++){
        left = p;
        if(s.count(a[p])){break;}
        s.insert(a[p]);
    }

    for(long p = n - 1; p >= left; p--){
        right = p;
        if(s.count(a[p])){break;}
        s.insert(a[p]);
    }

    mn = right - left + 1;


    left = 0; right = n - 1; s.clear();
    for(long p = n - 1; p >= 0; p--){
        right = p;
        if(s.count(a[p])){break;}
        s.insert(a[p]);
    }
    for(long p = 0; p <= right; p++){
        left = p;
        if(s.count(a[p])){break;}
        s.insert(a[p]);
    }

    long tmp = right - left + 1;
    mn = (mn < tmp) ? mn : tmp;

    printf("%ld\n", mn);

    return 0;
}
