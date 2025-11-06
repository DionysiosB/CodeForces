#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long left(-1), right(-1); bool done(false);
        for(long p = 1; !done && p < n; p++){
            for(long q = 0; !done && q < p; q++){
                if((a[p] % a[q]) % 2){continue;}
                done = true; left = a[q]; right = a[p];
            }
        }

        if(done){printf("%ld %ld\n", left, right);}
        else{puts("-1");}
    }

}
