#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> div;
        long m(n);
        for(long p = 2; p * p <= m + 10; p++){
            if(n % p){continue;}
            while(n % p == 0){div.push_back(p); n /= p;}
        }

        if(n > 1){div.push_back(n);}

        bool possible(div.size() >= 3);
        long a(1), b(1), c(1);
        if(possible){
            a = div[0];
            long idx(2);
            if(div[0] == div[1]){b = div[1] * div[2]; ++idx;}
            else{b = div[1];}
            for(long p = idx; p < div.size(); p++){c *= div[p];}
            if(c <= 1 || c == a || c == b){possible = false;}
        }

        if(possible){printf("YES\n%ld %ld %ld\n", a, b, c);}
        else{puts("NO");}
    }

    return 0;
}
