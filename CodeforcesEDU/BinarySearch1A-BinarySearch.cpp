#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < k; p++){
        long x; scanf("%ld", &x);
        long left(0), right(n - 1);
        bool found(false);
        while(left <= right){
            long mid = (left + right) / 2;
            if(a[mid] == x){found = true; break;}
            else if(a[mid] < x){left = mid + 1;}
            else if(a[mid] > x){right = mid - 1;}
        }

        puts(found ? "YES" : "NO");
    }

    return 0;
}
