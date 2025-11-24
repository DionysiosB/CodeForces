#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n, k, q; scanf("%d %d %d", &n, &k, &q);
        std::vector<int> w(n + 1, 0), v(n + 1, 0);
        while(q--){
            int c, l, r; scanf("%d %d %d", &c, &l, &r);
            for(int p = l; p <= r; p++){w[p] |= c;}
        }
        
        for(int p = 1; p <= n; p++){
            if(w[p] == 3){v[p] = k + 1;}
            else if(w[p] == 2){v[p] = p % k;}
            else{v[p] = k;}
        }
        
        for(int p = 1; p <= n; p++){printf("%d ", v[p]);}
        puts("");
    }
    
}
