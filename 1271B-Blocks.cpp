#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long b(0), w(0);
    for(long p = 0; p < s.size(); p++){w += (s[p] == 'W'); b += (s[p] == 'B');}

    char target(0);
    if(w % 2 == n % 2){target = 'W';}
    else if(b % 2 == n % 2){target = 'B';}

    std::vector<long> v;
    for(long p = 0; target && p + 1 < s.size(); p++){
        if(s[p] == target){continue;}
        s[p] = target; 
        v.push_back(p + 1);
        if(s[p + 1] == 'W'){s[p + 1] = 'B';}
        else if(s[p + 1] == 'B'){s[p + 1] = 'W';}
    }

    if(target){
        std::cout << v.size() << std::endl;
        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        std::cout << std::endl;
    }
    else{std::cout << "-1" << std::endl;}

    return 0;
}
