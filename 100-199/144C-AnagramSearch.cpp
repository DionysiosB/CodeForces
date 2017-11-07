#include <cstdio>
#include <iostream>

int main(){

    const int N = 26;

    std::string source; getline(std::cin, source);
    std::string target; getline(std::cin, target);

    long targetCount[N] = {0};
    for(int p = 0; p < target.size(); p++){++targetCount[target[p] - 'a'];}

    long runningCount[N] = {0};
    for(int p = 0; p < target.size(); p++){
        if(source[p] == '?'){continue;}
        ++runningCount[source[p] - 'a'];
    }
        
    long total(0);
    bool possible(1);

    for(int q = 0; q < N; q++){if(runningCount[q] > targetCount[q]){possible = 0; break;}}
    if(possible){++total;}
    //for(int q = 0; q < 3; q++){std::cout << runningCount[q] << "\t";}; std::cout << std::endl;

    for(long p = 0; p < source.size() - target.size(); p++){
        if(source[p] != '?'){--runningCount[source[p] - 'a'];}
        if(source[p + target.size()] != '?'){++runningCount[source[p + target.size()] - 'a'];}
        possible = 1;
        //for(int q = 0; q < 3; q++){std::cout << runningCount[q] << "\t";}; std::cout << std::endl;
        for(int q = 0; q < N; q++){if(runningCount[q] > targetCount[q]){possible = 0; break;}}
        if(possible){++total;}
    }

    printf("%ld\n", total);


    return 0;
}
