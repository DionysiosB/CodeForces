#include <cstdio>
#include <iostream>
#include <algorithm>

bool isRight(int *c){

    int sides[3] = {0};
    sides[0] = (c[4] - c[2]) * (c[4] - c[2]) + (c[5] - c[3])* (c[5] - c[3]); 
    sides[1] = (c[4] - c[0]) * (c[4] - c[0]) + (c[5] - c[1])* (c[5] - c[1]); 
    sides[2] = (c[2] - c[0]) * (c[2] - c[0]) + (c[3] - c[1])* (c[3] - c[1]); 

    std::sort(sides, sides + 3);
    if(sides[0] > 0 && sides[2] == sides[0] + sides[1]){return 1;}
    else{return 0;}
}


int main(){

    int points[6] = {0};
    for(int k = 0; k < 6; k++){scanf("%d", points + k);}

    std::string output = "NEITHER";
    if(isRight(points)){output = "RIGHT";}
    else{
        for(int k = 0; k < 6; k++){
            ++points[k];    if(isRight(points)){output = "ALMOST"; break;}
            points[k] -= 2; if(isRight(points)){output = "ALMOST"; break;}
            ++points[k];
        }
    }

    std::cout << output << std::endl;
    return 0;
}
