#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);

    std::vector<std::vector<long> > mat(n + 1, std::vector<long>(n + 1, 0));
    for(long p = 1; p <= n; p++){for(long q=1;q<=n;++q){scanf("%ld", &mat[p][q]);}}
    for(long p = 1; p <= n; p++){scanf("%ld", &mat[0][p]);}


    for(long p = 1; p <= n; p++){
        long q(0), k(0);
        do{
            ++q;
            if(mat[p][q] == p){continue;}
            for(k=1;mat[0][k]>mat[p][q]||mat[0][k]==p;++k);
        }while(mat[0][k] != mat[p][q]);

        printf("%ld ", mat[p][q]);
    }

    puts("");

    return 0;
}
