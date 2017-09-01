#include <iostream>
#include <vector>

long actualPoints(long points, long time, long c){
    return (points >= (c * time)) ? (points - c * time) : 0;
}


int main(){

    long n, c; std::cin >> n >> c; 
    std::vector<long> scores(n);
    std::vector<long> minutes(n);

    for(int p = 0; p < n; p++){std::cin >> scores[p];}
    for(int p = 0; p < n; p++){std::cin >> minutes[p];}

    long limak(0), rad(0);
    long limakTime(0), radTime(0);
    for(int p = 0; p < n; p++){
        limakTime += minutes[p];
        radTime += minutes[n - 1 - p];
        limak += actualPoints(scores[p], limakTime, c);
        rad += actualPoints(scores[n - 1 - p], radTime, c);
    }

    if(limak > rad){std::cout << "Limak" << std::endl;}
    else if(limak < rad){std::cout << "Radewoosh" << std::endl;}
    else{std::cout << "Tie" << std::endl;}

    return 0;
}
