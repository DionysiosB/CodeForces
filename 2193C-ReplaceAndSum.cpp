#include <cstdio>
#include <vector>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, q; scanf("%ld %ld", &n, &q);
        std::vector<long> a(n), b(n);
        for(long &x : a){scanf("%ld", &x);}
        for(long &x : b){scanf("%ld", &x);}
        
        a[n - 1] = (a[n - 1] > b[n - 1] ? a[n - 1] : b[n - 1]);
        for(int p = n - 1; p >= 0; p--){
            a[p] = (a[p] > b[p] ? a[p] : b[p]);
            if(p + 1 < n && a[p] < a[p + 1]){a[p] = a[p + 1];}
        }
        
        for(int p = 1; p < n; p++){a[p] += a[p - 1];}
        
        while(q--){
            long left(0), right(0);
            scanf("%ld %ld", &left, &right);
            --left; --right;
            printf("%ld ", a[right] - (left ? a[left - 1] : 0));
        }
        puts("");
        
    }
    
}
