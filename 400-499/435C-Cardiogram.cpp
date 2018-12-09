#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> a(n);

    long total(0), currentY(0), minY(1e6), maxY(-1e6);
    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]);
        total += a[p];
        currentY += ((p % 2) ? -1 : 1) * a[p];
        if(currentY < minY){minY = currentY;}
        if(currentY > maxY){maxY = currentY;}
    }
    if(minY > 0){minY = 0;}
    if(maxY < 0){maxY = 0;}

    //std::cout << minY << "\t" << maxY << std::endl;

    std::string dummy; for(long p = 0; p < total; p++){dummy += ' ';}
    std::vector<std::string> cardio(maxY - minY, dummy);
    //for(long p = 0; p < cardio.size(); p++){std::cout << cardio[p] << std::endl;}; std::cout << std::endl << std::endl;

    long x(0), y(0);
    for(long p = 0; p < n; p++){
        if(p % 2){for(long q = 0; q < a[p]; q++){cardio[-minY + --y][x++] = '\\';}}
        else{for(long q = 0; q < a[p]; q++){cardio[-minY + y++][x++] = '/';}}
        //for(long p = cardio.size() - 1; p >= 0; p--){std::cout << cardio[p] << std::endl;}; std::cout << std::endl << std::endl;
    }

    for(long p = cardio.size() - 1; p >= 0; p--){std::cout << cardio[p] << std::endl;}

    return 0;
}
