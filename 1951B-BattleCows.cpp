#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long b = a[--k];
        long first(n), second(n);
        for(long p = 0; p < n; p++){
            if(a[p] > b && first == n){first = p;}
            else if(a[p] > b){second = p; break;}
        }

        long resA = first - 1;
        long resB = (second < k ? second : k) - first - (first == 0);
        printf("%ld\n", resA > resB ? resA : resB);
    }

}
