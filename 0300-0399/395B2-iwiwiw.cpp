//Same code as B1
#include <cstdio>
#include <iostream>
#include <vector>


int main(){

    int n(0); scanf("%d", &n);
    std::vector<std::string> beforePrev, prev;


    beforePrev.push_back("i");
    prev.push_back("ii"); prev.push_back("w");

    for(int k = 3; k <= n; k++){
        
        std::vector<std::string> current;
        for(int k = prev.size() - 1; k >= 0; k--){current.push_back('i' + prev[k]);}
        for(int k = beforePrev.size() - 1; k >= 0; k--){current.push_back('w' + beforePrev[k]);}
        beforePrev = prev;
        prev = current;
    }

    if(n == 1){std::cout << "i" << std::endl;}
    else{for(long k = 0; k < prev.size(); k++){std::cout << prev[k] << std::endl;}}
    
    return 0;
}
