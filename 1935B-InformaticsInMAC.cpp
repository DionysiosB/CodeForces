#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> first, last;
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(!first.count(x)){first[x] = p;}
            last[x] = p;
        }

        bool possible(true);
        long left(1), right(n);
        for(int p = 0; p < n; p++){
            if(!first.count(p)){break;}
            else if(first[p] == last[p]){possible = false; break;}
            left = (left > first[p]) ? left : first[p];
            right = (right < last[p]) ? right : last[p];
            if(left > right){possible = false;}
        }

        if(possible){printf("2\n1 %ld\n%ld %ld\n", left, left + 1, n);}
        else{puts("-1");}
    }

}
