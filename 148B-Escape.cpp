#include <cstdio>
#include <iostream>

int main(){

    double vp, vd, t, f, c; std::cin >> vp >> vd >> t >> f >> c;

    double distance = 0;
    int bijous = 0;
    distance += t * vp; if(vd < vp){distance = c;}

    while(distance < c){

        distance += distance / (vd - vp);

        if(distance >= c){break;}
        ++bijous;

        distance += distance * vp / vd;
        distance += f;
    }

    std::cout << bijous << std::endl;

    return 0;
}
