#include <cstdio>
#include <set>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long * array  = new long[n];
    long * tailUniques = new long[n];
    for(long k = 0; k < n; k++){scanf("%ld", array + k);}

    std::set<long> distinct;
    for(long k = n - 1; k >= 0; k--){
        distinct.insert(array[k]);
        tailUniques[k] = distinct.size();
    }

    long index(0);
    for(long k = 0; k < m; k++){scanf("%ld", &index); printf("%ld\n", tailUniques[index - 1]);}

    return 0;
}
