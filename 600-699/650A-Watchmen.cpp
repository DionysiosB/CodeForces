#include <iostream>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;

    std::map<long, long> countX;
    std::map<long, long> countY;
    std::map<std::pair<long, long>, long> countXY;

    int64_t pairs(0);
    while(n--){
        long x, y; std::cin >> x >> y;
        if(countX.count(x) > 0){pairs += countX[x]; ++countX[x];}
        else{countX[x] = 1;}

        if(countY.count(y) > 0){pairs += countY[y]; ++countY[y];}
        else{countY[y] = 1;}

        std::pair<long, long> xy = std::make_pair(x, y);
        if(countXY.count(xy) > 0){pairs -= countXY[xy]; ++countXY[xy];}
        else{countXY[xy] = 1;}
    }

    std::cout << pairs << std::endl;

    return 0;
}
