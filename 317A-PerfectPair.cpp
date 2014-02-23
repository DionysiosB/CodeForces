#include <cstdio>

int main(){

    long long x(0), y(0), m(0); scanf("%lld %lld %lld", &x, &y, &m);
    long long output(0);

    if(x >= m || y >= m){output = 0;}
    else if (x > 0 || y > 0){

        if(x < 0){output = - x / y; x += output * y;}
        else if(y < 0){output = - y / x; y += output * x;}

        while(x < m && y < m){
            if(x < y){x += y;} else{y += x;}
            ++output;
        }
    }
    else{output = -1;}
    
    printf("%lld\n", output);
    return 0;
}
