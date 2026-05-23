#include <iostream>

int main(){
    int n, m, k; std::cin >> n >> m >> k;
    std::string dirstr; std::cin >> dirstr >> dirstr;
    std::string state; std::cin >> state;
    int dir = (dirstr == "head") ? -1 : 1;
    for(int p = 0; p < state.size(); p++){
        if(state[p] == '1'){
            k += dir;
            if(k == 1 || k == n){dir = -dir;}
            if(k == 1){m = n;}
            else if(k == n){m = 1;}
            else{m = k - dir;}
        }
        else{
            if(k > m && m != 1){--m;}
            if(k < m && m != n){++m;}
            k += dir;
            if(k == 1 || k == n) dir = -dir;
        }

        if(k == m){std::cout << "Controller " << (p + 1) << std::endl; return 0;}
    }
    std::cout << "Stowaway" << std::endl;
    return 0;
}
