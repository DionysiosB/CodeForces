#include <iostream>
#include <vector>

int main(){

    int n, d; std::cin >> n >> d;
    std::vector<bool> wins(d, 0);
    for(int p = 0; p < d; p++){
        std::string presence; std::cin >> presence;
        for(int q = 0; q < n; q++) if(presence[q] == '0'){wins[p] = 1; break;}
    }
    
    int temp(0);
    int cons(0);
    for(int p = 0; p < d; p++){
        if(wins[p]){++temp;} else{temp = 0;}
        cons = (temp > cons) ? temp : cons;
    }

    std::cout << cons << std::endl;

    return 0;
}
