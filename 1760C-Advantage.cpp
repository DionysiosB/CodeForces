#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        long mxa(0), mxb(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            if(v[p] >= mxa){mxb = mxa; mxa = v[p];}
            else if(v[p] > mxb){mxb = v[p];}
        }

        for(long p = 0; p < n; p++){
            printf("%ld ", v[p] - ((v[p] == mxa) ? mxb : mxa));
        }
        puts("");

    }

}
