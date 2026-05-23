#include <cstdio>
#include <vector>

int main(){

    int n, k, x; scanf("%d %d %d", &n, &k, &x);

    std::vector<int> ballVec(n, 0);
    std::vector<std::pair<int,int> > locations;

    int start(-1), stop(-1);
    for(int p = 0; p < n; p++){
        scanf("%d", &ballVec[p]);
        if(ballVec[p] == x){if(start < 0){start = p;} else{stop = p;}}
        else{
            if(start > 0 && stop > start){locations.push_back(std::pair<int, int>(start,stop));}
            start = -1; stop = -1;
        }
    }


    int maxDestroyed(0);

    for(int p = 0; p < locations.size(); p++){
        int left = locations[p].first, right = locations[p].second;

        if(left > 0 && right < n - 1){
            bool action;
            do{ action = 0;
                int col = ballVec[left - 1];
                if(ballVec[right + 1] == col && ((left > 1 && ballVec[left - 2] == col) || (right < n - 1 && ballVec[right + 2] == col))){
                    action = 1;
                    while(left > 0 && ballVec[left - 1] == col){--left;}
                    while(right < n - 1 && ballVec[right + 1] == col){++right;}
                }
            }while(action);
        }

        if(right - left + 1> maxDestroyed){maxDestroyed = right - left + 1;}
    }

    printf("%d\n", maxDestroyed);

    return 0;
}
