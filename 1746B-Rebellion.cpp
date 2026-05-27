#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<int> v(n); for(long p = 0; p < n; p++){scanf("%d", &v[p]);}
        long left(0), right(n - 1), cnt(0);
        while(left < right){
            while(v[left] == 0){++left;}
            while(v[right] == 1){--right;}
            if(left < right){++cnt;}
            else{break;}
            ++left; --right;
        }

        printf("%ld\n", cnt);
    }
}
