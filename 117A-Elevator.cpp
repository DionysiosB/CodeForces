#include <cstdio>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    while(n--){
        long s(0), f(0), t(0), output(0);
        scanf("%ld %ld %ld", &s, &f, &t);
        if(s == f){output = t;}
        else{
            long T = 2 * (m - 1); //Period of a round trip
            --s; --f;   //For modulo arithmetic to work
            output = (t/T) * T;  
            if(s < f && (output + s) < t){output += T;}
            else if(s > f && (output + T - s) < t){output += T;}
            output += (s < f) ? f : (T - f);
        }
        printf("%ld\n", output);
    }
    return 0;
}
