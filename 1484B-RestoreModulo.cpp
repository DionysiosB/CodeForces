#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(0);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]); mx = (mx > a[p]) ? mx : a[p];}
        if(n <= 1){puts("0"); continue;}

        long pos(-1), neg(-1);
        for(long p = 1; p < n; p++){
            if(a[p] >= a[p - 1]){pos = a[p] - a[p - 1];}
            if(a[p] <= a[p - 1]){neg = a[p - 1] - a[p];}
        }

        //printf("** %ld %ld\n", pos, neg);

        long c(0), m(0);
        if(pos && neg){c = pos; m = pos + neg;}
        //printf("** %ld %ld\n", m, c);

        bool possible(m <= 0 || m > mx);
        for(long p = 1; p < n; p++){
            if(m > 0 && (a[p - 1] + c) % m != a[p]){possible = false;} // printf("---> %ld %ld %ld\n", p, a[p - 1], a[p]);}
            else if(m <= 0 && a[p] - a[p - 1] != c){possible = false;}
        }

        if(possible && m > 0){printf("%ld %ld\n", m, c);}
        else if(possible){puts("0");}
        else{puts("-1");}
    }

}
