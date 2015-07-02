#include <cstdio>
#include <iostream>
#include <cmath>

std::pair<long, long> simplify(long nom, long den){
    long outnom(nom), outden(den);
    for(long k = 2; k < sqrt(den); k++){
        while(outnom % k == 0 && outden % k == 0){outnom /= k; outden /= k;}
    }
    return std::pair<long, long>(outnom, outden);
}

int main(){

    long x, y, n; std::cin >> x >> y >> n;

    std::pair<long, long> closestFraction = std::pair<long, long>(x / y, 1);
    double minDiff = 1e5;

    for(long testDen = 1; testDen <= n; testDen++){
        double approx = 1.0 * x * testDen / y;
        long nomint = approx;
        if(approx - nomint > 0.5){++nomint;}
        std::cout << "Testing: " << nomint << " / " << testDen << std::endl;
        std::pair<long, long> output = simplify(nomint, testDen);
        double diff = 1.0 * output.first / output.second - 1.0 * x / y;
        if(diff < 0){diff = - diff;}
        if(diff < minDiff){minDiff = diff; closestFraction = output;}
    }

    std::cout << closestFraction.first << "/" << closestFraction.second << std::endl;
    return 0;
}
