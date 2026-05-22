#include <cstdio>
#include <vector>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n + 2);
        long left(-1), right(-1);
        for(long p = 1; p <= n; p++){
            scanf("%ld", &v[p]);
            if(v[p] == n){left = p - 1; right = p + 1;}
        }


        bool possible(true);
        for(long p = n - 1; possible && p >= 1; p--){
            if(v[left] == p){--left;}
            else if(v[right] == p){++right;}
            else{possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
