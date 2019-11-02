#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<bool> a(n + 1);

    long next = n;
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        a[x] = 1;

        while(a[next] == 1){
            printf("%ld ", next);
            --next;
        }

        puts("");
    }


    return 0;
}
