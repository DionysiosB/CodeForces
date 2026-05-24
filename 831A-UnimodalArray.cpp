#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long prev; scanf("%ld", &prev);
    int state(0);
    bool unimodal(true);
    for(long p = 1; p < n; p++){
        long x; scanf("%ld", &x);
        if(x > prev && state > 0){unimodal = false; break;}
        else if(x == prev){
            if(state == 0){state = 1;}
            else if(state > 1){unimodal = false; break;}
        }
        else if(x < prev){state = 2;}

        prev = x;
    }

    puts(unimodal ? "YES" : "NO");

    return 0;
}
