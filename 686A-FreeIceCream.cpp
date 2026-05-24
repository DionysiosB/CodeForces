#include <iostream>

int main(){

    long long n, x; std::cin >> n >> x;
    long long distress(0);
    while(n--){
        char sgn; long long d;
        std::cin >> sgn >> d;
        if(sgn == '+'){x += d;}
        else if(sgn == '-' && d > x){++distress;}
        else if(sgn == '-' && d <= x){x -= d;}
    }

    std::cout << x << " " << distress << std::endl;

    return 0;
}
