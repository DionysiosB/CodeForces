#include <cstdio>
#include <vector>

int main(){


    long n; scanf("%ld\n", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n; p++){
        for(long q = n - 1; q > p; q--){
            if(a[q - 1] > a[q]){
                printf("%ld %ld\n", q, q + 1);
                long temp = a[q - 1]; a[q - 1] = a[q]; a[q] = temp;
            }
        }
    }

    return 0;

}
