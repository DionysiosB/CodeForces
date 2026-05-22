#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    int n, m; std::cin >> n >> m;
    std::vector<std::set<int> > connected;
    int total(0);

    while(n--){

        int k; std::cin >> k;
        if(k == 0){++total; continue;}
        std::vector<int> languages(k, 0); for(int p = 0; p < k; p++){std::cin >> languages[p];}

        bool belongs(0);
        for(int p = 0; p < connected.size(); p++){
            if(belongs){break;}
            for(int q = 0; q < languages.size(); q++){
                if(connected[p].find(languages[q]) != connected[p].end()){
                    for(int r = 0; r < languages.size(); r++){connected[p].insert(languages[r]);}
                    belongs = 1;
                    break;
                }
            }
        }

        if(!belongs){
            std::set<int> current; 
            for(int p = 0; p < languages.size(); p++){current.insert(languages[p]);}
            connected.push_back(current);
        }
        
    }


    if(connected.size() > 0){
        std::vector<bool> unmerged(connected.size(), 1);
        for(int p = 0; p < connected.size(); p++){
            for(int q = p + 1; q < connected.size(); q++){
                std::set<int>::iterator myIter = connected[p].begin();
                for(myIter = connected[q].begin(); myIter != connected[q].end(); myIter++){if(connected[p].find(*myIter) != connected[p].end()){unmerged[q] = 0; break;}}
                if(!unmerged[q]){for(myIter = connected[p].begin(); myIter != connected[p].end(); myIter++){connected[p].insert(*myIter);}}
            }
        }

        for(int p = 0; p < unmerged.size(); p++){if(unmerged[p]){++total;}}
        --total;
    }
    std::cout << total << std::endl;

    return 0;
}
