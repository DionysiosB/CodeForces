#include <cstdio>
#include <iostream>

int main(){

    std::string first, second; getline(std::cin, first); getline(std::cin, second);

    bool same(1);
    if(first.length() != second.length()){same = 0;}
    else{
        long diffA(-1), diffB(-1);
        for(int k = 0; k < first.length(); k++){
            if(first[k] == second[k]){continue;}
            else if(diffA < 0){diffA = k;}
            else if(diffB < 0){diffB = k;}
            else {same = 0; break;}
        }

        if(diffA >= 0 && diffB < 0){same = 0;}
        if(diffA >= 0 && diffB >= 0 && (first[diffA] != second[diffB] || first[diffB] != second[diffA])){same = 0;}
    }

    
    if(same){puts("YES");} else{puts("NO");}
    return 0;
}
