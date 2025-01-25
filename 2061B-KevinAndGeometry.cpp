#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.rbegin(), v.rend());

        long s(-1), sidx(-1), a(-1), b(-1);

        for(long p = 1; p < n; p++){
            if(v[p - 1] == v[p]){sidx = p; s = v[p]; v[p - 1] = v[p] = -1; break;}
        }

        if(v[0] > 0){a = v[0]; v[0] = -1;}
        else{a = v[2]; v[2] = -1;}

        for(long p = 1; p < n; p++){
            if(v[p] < 0){continue;}
            if(a < 2 * s + v[p]){b = v[p]; break;}
            else{a = v[p];}
        }

        if(b > 0){printf("%ld %ld %ld %ld\n", s, s, a, b);}
        else{puts("-1");}
    }

}
