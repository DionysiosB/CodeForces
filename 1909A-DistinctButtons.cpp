#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        int xneg(0), xpos(0), yneg(0), ypos(0);
        for(long p = 0; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            if(x < 0){xneg = 1;}
            else if(x > 0){xpos = 1;}
            if(y < 0){yneg = 1;}
            else if(y > 0){ypos = 1;}
        }

        int s = xneg + xpos + yneg + ypos;
        puts(s <= 3 ? "YES" : "NO");
    }

}
