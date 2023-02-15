#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        int prev(0); scanf("%d", &prev);
        long s(prev);
        bool neg(0), z(0);
        for(long p = 1; p < n; p++){
            int x; scanf("%d", &x); 
            s += x;
            if(x < 0 && prev < 0){neg = true;}
            else if(x * prev < 0){z = true;}
            prev = x;
        }

        if(neg){s += 4;}
        else if(!z){s -= 4;}

        printf("%ld\n", s);
    }

}
