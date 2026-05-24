#include<iostream>
#include<map>
#include<set>
#include<vector>


int main(){

    std::ios::sync_with_stdio(false);
    
    long n; std::cin >> n;
    bool possible(true);
    std::vector<std::string> res(n);
    std::set<std::string> used, forbidden;

    for(long p = 0; p < n; p++) {
        std::string team, home; std::cin >> team >> home;
        std::string nameA = team.substr(0,3); 
        std::string nameB = team.substr(0,2) + home.substr(0,1);
                
        if(used.count(nameB)) {
            if(used.count(nameA) || forbidden.count(nameA)){possible = false; break;}
            res[p] = nameA;
            used.insert(nameA);
        }
        else {res[p] = nameB; used.insert(nameB);}
        forbidden.insert(nameA);
    }

    if(!possible){std::cout << "NO" << std::endl;}
    else{std::cout << "YES" << std::endl; for(long p = 0; p < n; p++){std::cout << res[p] << std::endl;}}
    
    return 0;
}
