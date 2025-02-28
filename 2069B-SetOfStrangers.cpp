#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::set<long> sa, sb;
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                long x; scanf("%ld", &x);
                if((row + col) % 2){sa.insert(x);}
                else{sb.insert(x);}
            }
        }

        if(n * m == 1){puts("0"); continue;}

        bool common(false);
        for(std::set<long>::iterator it = sa.begin(); !common && it != sa.end(); it++){
            if(sb.count(*it)){common = true;}
        }

        printf("%ld\n", (sa.size() - 1) + (sb.size() - common));
    }

}
