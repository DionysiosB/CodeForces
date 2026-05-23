#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 3;
    //0 for taxi, 1 for pizza 2 for girls; Should have made this an enum;

    int n(0); scanf("%d\n", &n);
    //std::cout << n << std::endl;
    std::vector<std::string> nameVec(n);
    std::vector<std::vector<int> > numbers(n, std::vector<int>(N, 0));

    int maxNumbers[N] = {0};

    for(int k = 0; k < n; k++){
        int num(0); std::string currentName(""); std::cin >> num >> currentName; scanf("\n");
        nameVec[k] = currentName;
        //std::cout << currentName << "\t***" << std::endl;

        while(num--){
            std::string temp; getline(std::cin, temp);
            //std::cout << temp << std::endl;
            if(temp[0] == temp[1] && temp[1] == temp[3] && temp[3] == temp[4] && temp[4] == temp[6] && temp[6] == temp[7]){++numbers[k][0];}
            else if(temp[0] > temp[1] && temp[1] > temp[3] && temp[3] > temp[4] && temp[4] > temp[6] && temp[6] > temp[7]){++numbers[k][1];}
            else{++numbers[k][2];}
        }

        for(int p = 0; p < N; p++){
            //std::cout << "P: " << p << ": " << numbers[k][p] << "\t\t";
            if(numbers[k][p] > maxNumbers[p]){maxNumbers[p] = numbers[k][p];}
        }
        //std::cout << std::endl << std::endl;
    }

    bool moreThanOne;

    moreThanOne = 0;
    std::cout << "If you want to call a taxi, you should call: "; 
    for(int k = 0; k < n; k++){
        if(numbers[k][0] == maxNumbers[0]){
            if(moreThanOne){std::cout << ", ";}
            std::cout << nameVec[k]; moreThanOne = 1;
        }
    }
    std::cout << ".\n"; 

    moreThanOne = 0;
    std::cout << "If you want to order a pizza, you should call: ";
    for(int k = 0; k < n; k++){
        if(numbers[k][1] == maxNumbers[1]){
            if(moreThanOne){std::cout << ", ";}
            std::cout << nameVec[k]; moreThanOne = 1;
        }
    }
    std::cout << ".\n"; 

    moreThanOne = 0;
    std::cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int k = 0; k < n; k++){
        if(numbers[k][2] == maxNumbers[2]){
            if(moreThanOne){std::cout << ", ";}
            std::cout << nameVec[k]; moreThanOne = 1;
        }
    }
    std::cout << ".\n"; 

    return 0;
}
