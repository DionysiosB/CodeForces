#include <cstdio>
#include <map>


int main(){


    long n; scanf("%ld", &n);
    std::map<long, long> lookup;

    long cumsum = 0;
    for(long p = 0; p < n; p++){
        long temp; scanf("%ld", &temp);
        for(long q = 0; q < temp; q++){
            lookup.insert(std::pair<long, long>(++cumsum, p + 1));
        }
    }

    long m(0); scanf("%ld", &m);
    for(long p = 0; p < m; p++){
        long inq; scanf("%ld", &inq);
        printf("%ld\n", lookup[inq]);
    }

    return 0;
}
