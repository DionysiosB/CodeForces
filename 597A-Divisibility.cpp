#include <iostream>

int main(){

    int64_t k, a, b; scanf("%lld %lld %lld\n", &k, &a, &b);
    int64_t first = (a / k) * k; if(first < a){first += k;}
    int64_t last = (b / k) * k; if(last > b){last -= k;}
    printf("%lld\n", 1 + last / k - first / k);

    return 0;
}
