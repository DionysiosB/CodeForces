#include <iostream>
#include <vector>

int main(){

    int n; std::cin >> n;
    std::vector<std::string> seats(n);
    bool found(false);
    for(int p = 0; p < n; p++){
        std::string row; std::cin >> row;
        if(!found && row[0] == 'O' && row[1] == 'O'){row[0] = row[1] = '+'; found = true;}
        if(!found && row[3] == 'O' && row[4] == 'O'){row[3] = row[4] = '+'; found = true;}
        seats[p] = row;
    }

    if(found){
        std::cout << "YES" << std::endl;
        for(int p = 0; p < n; p++){std::cout << seats[p] << std::endl;}
    }
    else{std::cout << "NO" << std::endl;}

    return 0;
}
