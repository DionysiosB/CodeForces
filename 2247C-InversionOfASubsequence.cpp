#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);

        std::vector<int> v(n, 8); bool z(true);
        for(int &x : v){
            scanf("%d", &x);
            if(x){z = false;}
        }

        bool a(true), d(true); long s(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            s += (v[p] && !x);
            if(x != v[p]){d = false;}
            if(!x){a = false;}
        }

        if(d){puts("0");}
        else if(z || a){puts("-1");}
        else{printf("%ld\n", 2 - (s % 2));}
    }

}
