#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        long mxa(0), mxb(0);
        for(long p = 0; p < n; p++){
            if(a[p] > b[p]){long tmp = a[p]; a[p] = b[p]; b[p] = tmp;}
            mxa = (mxa > a[p]) ? mxa : a[p];
            mxb = (mxb > b[p]) ? mxb : b[p];
        }

        bool res = (mxa == a.back()) && (mxb == b.back());
        puts(res ? "Yes" : "No");
    }

}
