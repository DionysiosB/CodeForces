#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::vector<int> > a(n, std::vector<int>(n, 0));
        for(long row = 0; row < n; row++){for(long col = 0; col < n; col++){scanf("%d", &a[row][col]);}}
        long diff(0);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                diff += (a[row][col] != a[n - 1 - row][n - 1 - col]);
            }
        }

        diff /= 2;
        if( (k < diff) || ( ((k - diff) % 2) && (n % 2 == 0)) ){puts("NO");}
        else{puts("YES");}
    }

}
