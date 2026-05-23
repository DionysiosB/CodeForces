#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        double a, b; scanf("%lf %lf", &a, &b);
        double prob(0);
        if(b <= 0){prob = 1.0;}
        else if(a <= 0){prob = 0.5;}
        else{prob = (a < 4 * b) ? (0.5 + a /(16 * b)) : (1 - b / a);}

        printf("%.7lf\n", prob);
    }

    return 0;
}
