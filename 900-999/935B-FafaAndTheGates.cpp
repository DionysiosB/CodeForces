#include <iostream>

long sgn(long x){
    if(x > 0){return 1;}
    else if(x < 0){return -1;}
    return 0;
}

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long w(0), x(0), y(0), cost(0);
    for(long p = 0; p < n; p++){
        if(s[p] == 'U'){++y;}
        else if(s[p] == 'R'){++x;}
        if(x == y){continue;}
        long pos = sgn(y - x);
        cost += (w != 0) && (pos != w);
        w = pos;
    }

    std::cout << cost << std::endl;

    return 0;
}
