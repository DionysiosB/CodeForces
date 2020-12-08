#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); 
    long min(2e9);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); min = (min < a[p]) ? min : a[p];}
    long prev(-n - 1), dist(n + 1);
    for(long p = 0; p < n; p++){
        if(a[p] > min){continue;}
        dist = (dist < (p - prev)) ? dist : (p - prev);
        prev = p;
    }

    printf("%ld\n", dist);

    return 0;
}
