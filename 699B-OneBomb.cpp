#include <cstdio>
#include <iostream>
#include <set>

int main(){

    int n, m; std::cin >> n >> m;
    std::set<std::pair<int, int> > cand;
    bool noneSoFar(true);
    for(int row = 1; row <= n; row++){
        std::string s; std::cin >> s;
        for(int col = 1; col <= s.size(); col++){
            if(s[col - 1] != '*') continue;
            if(noneSoFar){
                noneSoFar = false;
                for(int p = 1; p <= m; p++){cand.insert(std::make_pair(row, p));}
                for(int p = 1; p <= n; p++){cand.insert(std::make_pair(p, col));}
            }
            else{
                std::set<std::pair<int, int> > toRemove;
                for(std::set<std::pair<int, int> >::iterator setIter = cand.begin(); setIter != cand.end(); setIter++){
                    std::pair<int, int> current = *setIter;
                    if(current.first != row && current.second != col){toRemove.insert(current);}
                }

                for(std::set<std::pair<int, int> >::iterator setIter = toRemove.begin(); setIter != toRemove.end(); setIter++){cand.erase(*setIter);}
            }
        }
    }

    if(noneSoFar){puts("YES\n 1 1\n");}
    else if(cand.size() > 0){puts("YES"); printf("%d %d\n", (*cand.begin()).first, (*cand.begin()).second);}
    else{puts("NO");}

    return 0;
}
