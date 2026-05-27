#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::vector<long> w; long s(0), rem(-1);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(s + a == x){
                if(rem > 0){s += rem; w.push_back(rem);}
                rem = a;
            }
            else{w.push_back(a); s += a;}
        }

        if(rem > 0){s += rem; w.push_back(rem);}
        if(s == x){puts("NO");}
        else{
            puts("YES");
            for(long p = 0; p < w.size(); p++){printf("%ld ", w[p]);}
            puts("");
        }
    }

}
