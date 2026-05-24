#include <iostream>

int sumDigits(int64_t a){
    int sum(0);
    while(a > 0){sum += a % 10; a /= 10;}
    return sum;
}

int main(){

    const int N = 18;
    int64_t x; std::cin >> x;
    int sd = sumDigits(x);
    int64_t res(x), div(1);
    for(int p = 0; p < N; p++){
        int64_t cur = (x / div) * div - 1;
        if(sumDigits(cur) > sd){sd = sumDigits(cur); res = cur;}
        if(div > x){break;}
        div *= 10;
    }

    std::cout << res << std::endl;

    return 0;
}
