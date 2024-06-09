#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        std::vector<long> v;
        while(x){v.push_back(x % 2); x /= 2;}
        bool carry(false);
        for(long p = 1; p < v.size(); p++){
            if(v[p - 1] && v[p]){v[p - 1] = -1; v[p] = 0; carry = true;}
            else if(v[p] && carry){v[p] = 0;}
            else if(v[p]){continue;}
            else if(carry){v[p] = 1; carry = false;}
        }

        if(carry){v.push_back(1);}

        printf("%ld\n", v.size());
        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

}
