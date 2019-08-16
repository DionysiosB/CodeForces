#include <iostream>
#include <vector>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> seq(n);
    std::set<std::string> names;
    for(long p = 0; p < n; p++){std::cin >> seq[p];}
    for(long p = n - 1; p >= 0; p--){
        if(names.count(seq[p]) > 0){continue;}
        names.insert(seq[p]);
        std::cout << seq[p] << std::endl;
    }

    return 0;
}
