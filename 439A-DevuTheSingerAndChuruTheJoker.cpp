#include <cstdio>

int main(){
    
    const int B = 10;
    const int J = 2;
    long n, d; scanf("%ld %ld\n", &n, &d);

    long duration(0), jokes(0);
    while(n--){
        long t; scanf("%ld", &t);
        duration += t + B;
        jokes += J;
    }

    duration -= B; jokes -= J;
    jokes += (d - duration) / (B / J);

    if(duration > d){puts("-1");}
    else{printf("%ld\n", jokes);}

    return 0;
}
