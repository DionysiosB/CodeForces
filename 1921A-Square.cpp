#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long x[4], y[4];
        for(long p = 0; p < 4; p++){scanf("%ld %ld", x + p, y + p);}
        long length(0), width(0);
        for(long p = 1; !length && p < 4; p++){if(x[p] == x[0]){length = y[p] - y[0];}}
        for(long p = 1; !width && p < 4; p++){if(y[p] == y[0]){width = x[p] - x[0];}}
        long area = length * width;
        if(area < 0){area *= -1;}
        printf("%ld\n", area);
    }

}
