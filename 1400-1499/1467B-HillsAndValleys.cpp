#include<cstdio>
#include<vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> t(n, 0);
        for(long p = 1; p + 1 < n; p++){
            if(a[p - 1] < a[p] && a[p] > a[p + 1]){t[p] = 1;}
            else if(a[p - 1] > a[p] && a[p] < a[p + 1]){t[p] = -1;}
        }

        long cnt(0); bool two(false), three(false);
        for(long p = 1; p + 1 < n; p++){
            cnt += (t[p] != 0);
            if(t[p - 1] * t[p] != 0){two = true;}
            if(t[p - 1] * t[p] * t[p + 1] != 0){three = true;}
        }

        long res = cnt - (cnt > 0) - two - three;
        printf("%ld\n", res);
    }

}
