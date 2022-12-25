#include<cstdio>
#include<vector>
#include<algorithm>


int main(){
    
    int n; scanf("%d", &n);
    std::vector<int> boys(n);
    for(int p = 0; p < n; p++){scanf("%d", &boys[p]);}

    int m; scanf("%d", &m);
    std::vector<int> girls(m);
    for(int p = 0; p < m; p++){scanf("%d", &girls[p]);}

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int indexB(0), indexG(0), pairs(0);
    while(indexB < n && indexG < m){
        if((-1 <= boys[indexB] - girls[indexG]) && (boys[indexB] - girls[indexG] <= 1)){
            ++indexB; ++indexG; ++pairs;
        }
        else if(boys[indexB] < girls[indexG]){++indexB;}
        else if(girls[indexG] < boys[indexB]){++indexG;}
    }

    printf("%d\n", pairs);
    
   return 0;
}
