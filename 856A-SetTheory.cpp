#include <cstdio>
#include <vector>


int main(){

    int t; scanf("%d", &t);
    const long N = 2000000;
    while(t--){
        puts("YES");
        std::vector<bool> available(N, true);
        int n; scanf("%d", &n);
        std::vector<long> a(n);
        for(int p = 0; p < n; p++){scanf("%ld", &a[p]);}

        int count(0);
        for(long p = 1; p < N && count < n; p++){
            bool possible(true);
            for(long q = 0; q < n; q++){if(!available[a[q] + p]){possible = false; break;}}
            if(possible){
                printf("%ld ", p);
                ++count; 
                for(long q = 0; q < n; q++){available[a[q] + p] = false;}
            }
        }
        puts("");

    }

    return 0;
}
