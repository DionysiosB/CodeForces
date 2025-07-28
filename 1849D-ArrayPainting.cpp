#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}


    long cost(0);
    for(long p = 0; p < n; p++){
        if(p && a[p - 1]){--a[p - 1];} //No need to reduce a[p - 1] actually
        else if(!a[p] && p + 1 < n && a[p + 1]){--a[p + 1];}
        else{++cost;}
    }

    printf("%ld\n", cost);

    return 0;
}
