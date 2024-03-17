#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool one(false); int s(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(x % 3 == 1){one = true;}
            s += x; s %= 3;
        }

        if(!one && s % 3 == 1){puts("2");}
        else if(s % 3){puts("1");}
        else{puts("0");}
    }

}
