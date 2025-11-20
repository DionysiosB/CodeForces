#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}
        std::vector<int> b(n); for(long p = 0; p < n; p++){scanf("%d", &b[p]);}
        bool cnt(0), last(0);
        for(long p = 0; p < n; p++){
            if(a[p] == b[p]){continue;}
            cnt = !cnt;
            if(p % 2){last = 0;}
            else{last = 1;}
        }

        if(!cnt){puts("Tie");}
        else{puts(last ? "Ajisai" : "Mai");}
    }

}
