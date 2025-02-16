#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        std::set<long> singles, dupes;
        for(long p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            if(dupes.count(v[p])){continue;}
            else if(singles.count(v[p])){dupes.insert(v[p]); singles.erase(v[p]);}
            else{singles.insert(v[p]);}
        }

        long crl(-1), mxlen(-1);
        long left(-1), right(-1);
        for(long p = 0; p < n; p++){
            if(singles.count(v[p])){
                if(crl < 0){crl = p;}
                if(p - crl + 1 > mxlen){mxlen = p - crl + 1; left = crl + 1; right = p + 1;}
            }
            else{crl = -1;}
        }

        if(left < 0){puts("0");}
        else{printf("%ld %ld\n", left, right);}
    }

}
