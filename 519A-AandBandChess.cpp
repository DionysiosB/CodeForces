#include <iostream>
#include <map>

int main(){

    const int N = 8;
    int total(0);
    std::map<char, int> value;
    value.insert(std::pair<char, int>('q', -9));
    value.insert(std::pair<char, int>('r', -5));
    value.insert(std::pair<char, int>('b', -3));
    value.insert(std::pair<char, int>('n', -3));
    value.insert(std::pair<char, int>('p', -1));
    value.insert(std::pair<char, int>('k', 0));

    value.insert(std::pair<char, int>('Q', 9));
    value.insert(std::pair<char, int>('R', 5));
    value.insert(std::pair<char, int>('B', 3));
    value.insert(std::pair<char, int>('N', 3));
    value.insert(std::pair<char, int>('P', 1));
    value.insert(std::pair<char, int>('K', 0));

    for(int p = 0; p < N; p++){
        std::string row; getline(std::cin, row);
        for(int k = 0; k < row.size(); k++){if(row[k] != '.'){total += value[row[k]];}}
    }

    
    if(total > 0){std::cout << "White" << std::endl;}
    else if(total < 0){std::cout << "Black" << std::endl;}
    else{std::cout << "Draw" << std::endl;}

    return 0;
}
