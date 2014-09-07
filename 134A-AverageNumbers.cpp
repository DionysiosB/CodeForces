#include <cstdio>
#include <vector>

int main(){

    long n(0); scanf("%ld", &n);
    long *array = new long[n];
    long total(0);
    for(long k = 0; k < n; k++){scanf("%ld", array + k); total += array[k];}


    std::vector<long> indices;
    for(long k = 0; k < n; k++){if(array[k] * n == total){indices.push_back(k);}}


    printf("%ld\n", indices.size());
    for(long k = 0; k < indices.size(); k++){printf("%ld ", 1 + indices[k]);}
    puts("");

    return 0;
}
