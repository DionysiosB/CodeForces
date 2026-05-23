#include<cstdio>
#include<iostream>
#include<set>

int main(){

    int n(0), m(0); scanf("%d %d\n", &n, &m);

    std::set<int> output;
    bool possible(1);

    for(int row = 0; row < n; row++){
        std::string initialState(""); getline(std::cin, initialState);
        int dwarfPos = initialState.find("G");
        int candyPos = initialState.find("S");

        if(dwarfPos > candyPos){possible = 0; break;}
        else if(dwarfPos < candyPos){output.insert(candyPos - dwarfPos);}
    }

    if(possible){std::cout << output.size() << std::endl;}
    else{puts("-1");}

    return 0;
}
