#include <iostream>

int main(){

    const long C = 20000;
    std::ios_base::sync_with_stdio(false);
    int n; std::cin >> n;
    long lat(C);
    bool valid(true);
    while(n--){
        long dist; std::string dir; std::cin >> dist >> dir;
        if((lat == 0) && (dir != "North")){valid = false; break;}
        if((lat == C) && (dir != "South")){valid = false; break;}
        if((lat < 0) || (lat > C)){valid = false; break;}

        if(dir == "North"){lat += dist;}
        else if(dir == "South"){lat -= dist;}
    }

    if(lat != C){valid = false;}
    
    std::cout << (valid ? "YES" : "NO") << std::endl;

    return 0;
}
