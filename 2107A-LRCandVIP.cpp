#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);

        long mna(1e5), mxa(-1);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            mna = (mna < a[p] ? mna : a[p]);
            mxa = (mxa > a[p] ? mxa : a[p]);
        }

        if(mna == mxa){puts("No"); continue;}

        puts("Yes");
        for(long p = 0; p < n; p++){printf("%d ", a[p] == mxa ? 1 : 2);}
        puts("");
    }

}
