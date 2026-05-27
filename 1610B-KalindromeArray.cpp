#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        long u(-1), v(-1);
        long left(0), right(n - 1);
        while(left < right){
            if(a[left] == a[right]){++left; --right;}
            else{u = a[left]; v = a[right]; break;}
        }

        bool possibleA(true), possibleB(true);

        left = 0, right = n - 1;
        while(u > 0 && left < right){
            if(a[left] == a[right]){++left; --right;}
            else if(a[left] == u){++left;}
            else if(a[right] == u){--right;}
            else{possibleA = false; break;}
        }

        left = 0, right = n - 1;
        while(v > 0 && left < right){
            if(a[left] == a[right]){++left; --right;}
            else if(a[left] == v){++left;}
            else if(a[right] == v){--right;}
            else{possibleB = false; break;}
        }

        bool possible = possibleA || possibleB;
        puts(possible ? "YES" : "NO");
    }

}
