#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> va, vb, vc, vd;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 6 == 0){va.push_back(x);}
            else if(x % 3 == 0){vb.push_back(x);}
            else if(x % 2 == 0){vc.push_back(x);}
            else{vd.push_back(x);}
        }

        for(long x : va){printf("%ld ", x);}
        for(long x : vb){printf("%ld ", x);}
        for(long x : vd){printf("%ld ", x);}
        for(long x : vc){printf("%ld ", x);}
        puts("");
    }

}
