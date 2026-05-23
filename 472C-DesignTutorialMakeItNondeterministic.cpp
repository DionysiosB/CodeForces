#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<std::pair<std::string, std::string> > nameVec(n);

    for(long p = 0; p < n; p++){
        std::string first, second;
        std::cin >> first >> second;
        if(first > second){std::string temp = first; first = second; second = temp;}
        nameVec[p] = std::pair<std::string, std::string>(first, second);
    }

    std::vector<long> order(n);
    for(long p = 0; p < n; p++){
        long temp; std::cin >> temp; order[p] = temp - 1;
    }


    std::string last = nameVec[order[0]].first;
    std::string result = "YES";
    for(int p = 0; p < n; p++){
        if(nameVec[order[p]].first >= last){last = nameVec[order[p]].first;}
        else if(nameVec[order[p]].second >= last){last = nameVec[order[p]].second;}
        else{result = "NO"; break;}
    }

    std::cout << result << std::endl;

    return 0;
}
