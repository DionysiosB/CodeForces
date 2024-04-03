#include <cstdio>
#include <vector>

bool bindec(long x){
    while(x){
        if(x % 10 > 1){return false;}
        x /= 10;
    }
    return true;
}

int main(){

    std::vector<bool> v(1e5 + 7, false);
    v[1] = true;
    for(long p = 1; p < v.size(); p++){v[p] = bindec(p);}

    for(long p = 1; p < v.size(); p++){
        if(!v[p]){continue;}
        for(long q = 1; q <= p && q * p < v.size(); q++){if(v[q]){v[p * q] = 1;}}
    }

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        puts(v[n] ? "YES" : "NO");
    }

}
