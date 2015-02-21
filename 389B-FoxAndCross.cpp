#include <cstdio>
#include <set>
#include <algorithm>


int main(){

    int n(0); scanf("%d", &n);
    std::set<std::pair<int,int>> position;
    for(int row = 0; row < n; row++){
        scanf("\n");
        for(int col = 0; col < n; col++){
            char temp; scanf("%c", &temp);
            if(temp == '#'){position.insert(std::pair<int,int>(row,col));}
        }
    }

    
    bool possible(1);

    for(int row = 0; row < n; row++){
        if(!possible){break;}
        for(int col = 0; col < n; col++){
            std::set<std::pair<int,int>>::iterator myIter = position.find(std::pair<int,int>(row,col));
            if(myIter != position.end()){
                position.erase(myIter);
                myIter = position.find(std::pair<int,int>(row + 1,col - 1)); 
                if(myIter != position.end()){position.erase(myIter);} else{possible = 0; break;}
                myIter = position.find(std::pair<int,int>(row + 1,col));
                if(myIter != position.end()){position.erase(myIter);} else{possible = 0; break;}
                myIter = position.find(std::pair<int,int>(row + 1,col + 1));
                if(myIter != position.end()){position.erase(myIter);} else{possible = 0; break;}
                myIter = position.find(std::pair<int,int>(row + 2,col));
                if(myIter != position.end()){position.erase(myIter);} else{possible = 0; break;}
            }
        }
    }

    if(possible){puts("YES");} else{puts("NO");}
    return 0;

}
