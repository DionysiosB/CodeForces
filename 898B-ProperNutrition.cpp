#include <iostream>
#include <vector>

int main(){

    long n, a, b; std::cin >> n >> a >> b;
    long x(-1), y(-1);
    for(long p = 0; p * a <= n; p++){if((n - p * a) % b == 0){x = p; y = (n - p * a) / b; break;}}
    if(x >= 0){printf("YES\n%ld %ld\n", x, y);}
    else{puts("NO");}

    return 0;
}
