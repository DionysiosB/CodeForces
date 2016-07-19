#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> widthA;
    std::vector<int> widthB;
    for(int p = 0; p < n; p++){
        int t, w; scanf("%d %d\n", &t, &w);
        if(t == 1){widthA.push_back(w);}
        else if(t == 2){widthB.push_back(w);}
    }

    sort(widthA.begin(), widthA.end());
    sort(widthB.begin(), widthB.end());
    int minWidth(32767);

    for(int a = 0; a <= widthA.size(); a++){
        for(int b = 0; b <= widthB.size(); b++){
            //Used "<=" instead of "<" above,  for the case when widthA or widthB = 0;

            int totalWidth = 0;
            for(int p = 0; p < widthA.size() - a; p++){totalWidth += widthA[p];}
            for(int p = 0; p < widthB.size() - b; p++){totalWidth += widthB[p];}
            if((totalWidth <= a + 2 * b)  && (a + 2 * b < minWidth)){minWidth = a + 2 * b;}
        }
    }


    printf("%d\n", minWidth);

    return 0;
}
