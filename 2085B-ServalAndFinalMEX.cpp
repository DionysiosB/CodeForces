#include <cstdio>

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long n; scanf("%ld", &n);
        long first(0), last(0);
        for(long p = 1; p <= n; p++) {
            long x; scanf("%ld", &x);
            if(x){continue;}
            if(!first){first = p;}
            last = p;
        }

        if(!last){printf("1\n1 %ld\n", n);}
        else if(first == 1 && last == n){printf("3\n3 %ld\n1 2\n1 2\n",n);}
        else if(last != n){printf("2\n1 %ld\n1 2\n",n - 1);}
        else if(first != 1){printf("2\n2 %ld\n1 2\n",n);}
    }
}
