#include <cstdio>
#include <vector>

long deficit(std::vector<long> need, std::vector<long> have){
    long res(0);
    for(size_t p = 0; p < have.size(); p++){res += (need[p] > have[p]) ? (need[p] - have[p]) : 0;}
    return res;
}


int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> a(n, 0);
    std::vector<long> b(n, 0);

    for(size_t p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(size_t p = 0; p < n; p++){scanf("%ld", &b[p]);}

    long total(0);
    while(k >= 0){
        long toAdd = deficit(a, b);
        k -= toAdd; 
        if(k >= 0){
            for(size_t p = 0; p < n; p++){
                b[p] -= a[p]; 
                if(b[p] < 0){b[p] = 0;}
            }

            ++total;
        }
        else{break;}
    }

    printf("%ld\n", total);

    return 0;
}
