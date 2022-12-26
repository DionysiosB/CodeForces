#include <iostream>

int main(){

    long n, p; std::cin >> n >> p;
    int64_t total(0), binPower(1);
    double gift(0);

    for(long q = 0; q < n; q++){
        std::string s; std::cin >> s;
        if(s == "halfplus"){total += binPower; gift += 0.5;}
        binPower *= 2;
    }

    printf("%.0lf\n", (p * (total - gift)));

    return 0;
}
