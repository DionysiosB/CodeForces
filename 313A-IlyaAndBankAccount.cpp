#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    long n; scanf("%ld",&n);
    if(n >= 0){printf("%ld\n", n);}
    else{
        long x = - n / 100;
        printf("%ld\n", -10 * x - std::min( (-n - 100 * x)%10 , (-n- 100*x)/10 ) );
    }
    return 0;
}
