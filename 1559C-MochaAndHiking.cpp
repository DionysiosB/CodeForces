#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<int> a(n); long move(-1);
        for(long p = 0; p < n; p++){
            scanf("%d", &a[p]);
            if(p == 0 && a[0] == 1){move = -1;}
            else if(p == n - 1 && a.back() == 0){move = n - 1;}
            else if(p > 0 && a[p - 1] == 0 && a[p] == 1){move = p - 1;}
        }

        if(move < 0){printf("%ld ", n + 1);}
        for(long p = 0; p < n; p++){
            printf("%ld ", p + 1);
            if(move == p){printf("%ld ", n + 1);}
        }
        puts("");
    }

}
