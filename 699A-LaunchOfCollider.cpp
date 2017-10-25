#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n; 
    std::string direction; std::cin >> direction;
    long minDist(-1);
    long lastRight(-1);

    for(long p = 0; p < n; p++){
        int to = direction[p] == 'R' ? 1 : -1;
        long x; std::cin >> x;
        if(to > 0){lastRight = x;}
        else if(lastRight >= 0 && (minDist < 0 || (x - lastRight < minDist))){minDist = x - lastRight;}
    }

    long minTime = (minDist < 0) ? (-1) : (minDist / 2);
    std::cout << minTime << std::endl;

    return 0;
}
