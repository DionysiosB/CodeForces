#include <iostream>
#include <vector>

int main(){

    std::string db; std::cin >> db;
    bool sol(true);
    std::vector<std::string> dv;
    std::string cur; bool gat(false);
    for(long p = 0; p < db.size(); p++){
        cur += db[p];
        if(db[p] == '@'){
            if(gat || (cur.size() == 1) || (p + 2 > db.size())){sol = false; break;}; 
            gat = true;
        }
        else if(gat){dv.push_back(cur); cur = ""; gat = false;}
    }

    if(dv.size() > 0 && cur.size() > 0 && !gat){dv.back() += cur;}
    else if(dv.size() <= 0){sol = false;}

    if(sol){for(long p = 0; p < dv.size(); p++){std::cout << dv[p] << ((p + 1 < dv.size()) ? "," : "\n");}}
    else{std::cout << "No solution" << std::endl;}

    return 0;
}
