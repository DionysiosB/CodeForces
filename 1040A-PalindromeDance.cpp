#include <cstdio>
#include <vector>

int main(){

    long n, w, b; scanf("%ld %ld %ld", &n, &w, &b);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long cost(0); if(n % 2 && a[n / 2] == 2){cost += (b < w) ? b : w;}
    for(long p = 0; p < n / 2; p++){
        if(a[p] == 2 && a[n - 1 - p] == 2){cost += 2 * ((w < b) ? w : b);}
        else if(a[p] == 2){cost += (a[n - 1 - p] ? b : w);}
        else if(a[n - 1 - p] == 2){cost += (a[p] ? b : w);}
        else if(a[p] <= 1 && a[n - 1 - p] <= 1 && a[p] != a[n - 1 - p]){cost = -1; break;}
    }


    printf("%ld\n", cost); 

    return 0;
}
