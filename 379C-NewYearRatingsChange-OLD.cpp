#include <cstdio>
#include <set>

int main(){

    long n(0); scanf("%ld", &n);

    std::set<long> taken;
    for(int k = 0; k < n; k++){
        long desired(0); scanf("%ld", &desired);
        while(taken.find(desired) != taken.end()){++desired;}
        taken.insert(desired);
        printf("%ld ", desired);
    }
    puts("");

    return 0;
}
