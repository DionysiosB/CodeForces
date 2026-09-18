#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<int> v(n);
        for(int &x : v){scanf("%d", &x);}

        for(int p = 0; p < n; p++){
            if(!v[p]){continue;}
            v[p] = 1; break;
        }

        for(int p = n - 1; p >= 0; p--){
            if(!v[p]){continue;}
            v[p] = 1; break;
        }

        for(int &x : v){x = (x < 0) ? 0 : x;}
        for(int x : v){printf("%d ", x);}
        puts("");
    }

}
