#include <cstdio>

int main(){

    long n(0), d(0); scanf("%ld %ld\n", &n, &d); 
    long current(-1), total(0);
    for(int k = 0; k < n; k++){
        long temp(0); scanf("%ld", &temp);
        if(current < temp){current = temp;}
        else{
            long times = 1 + (current - temp)/d;
            current = temp + times * d;
            total += times;
        }
    }

    printf("%ld\n", total);
    return 0;
}
