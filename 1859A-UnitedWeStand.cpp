#include<cstdio>
#include<vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); long mx(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            mx = (mx > a[p]) ? mx : a[p];
        }

        std::vector<long> b, c;
        for(long p = 0; p < n; p++){
            if(a[p] < mx){b.push_back(a[p]);}
            else{c.push_back(a[p]);}
        }

        if(b.size()){
            printf("%ld %ld\n", b.size(), c.size());
            for(long p = 0; p < b.size(); p++){printf("%ld ", b[p]);}; puts("");
            for(long p = 0; p < c.size(); p++){printf("%ld ", c[p]);}; puts("");
        }
        else{puts("-1");}

    }

}
