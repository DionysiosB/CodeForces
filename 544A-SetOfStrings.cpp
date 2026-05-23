#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    int n; scanf("%d\n", &n);
    std::string q; getline(std::cin, q);

    std::vector<std::string> output;
    std::set<char> firstLetters;
    std::string current("");

    for(int p = 0; p < q.size(); p++){
        if(output.size() >= n - 1){current += q[p]; continue;}
        if(firstLetters.count(q[p]) == 0){
            if(current.size() > 0){output.push_back(current);}
            current = q[p];
            firstLetters.insert(q[p]);
        }
        else{current += q[p];}
        //std::cout << current << std::endl;
    }

    if(current.size() > 0){output.push_back(current);}

    if(output.size() < n){puts("NO"); return 0;}

    puts("YES");
    for(int p = 0; p < output.size(); p++){std::cout << output[p] << std::endl;}

    return 0;
}
