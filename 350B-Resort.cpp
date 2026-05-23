#include <cstdio>
#include <vector>

int main(){

    long n(0); scanf("%ld", &n);
    bool *object = new bool[n];
    long *previous = new long[n];
    long *outDegree = new long[n];

    for(int k = 0; k < n; k++){outDegree[k] = 0;}
    long temp(0);
    
    std::vector<long> hotels;
    for(int k = 0; k < n; k++){
        scanf("%ld", &temp); 
        object[k] = temp; 
        if(object[k]){hotels.push_back(k);}
    }

    for(int k = 0; k < n; k++){
        scanf("%ld", &temp); 
        if(temp == 0){previous[k] = - 1;} 
        else{previous[k] = temp - 1; ++outDegree[temp - 1];}
    }

    std::vector<long> bestPath;
    for(int k = 0; k < hotels.size(); k++){
        std::vector<long> currentPath;
        long start = hotels[k]; currentPath.push_back(start);
        long current = previous[hotels[k]];
        while(current >= 0 && !object[current] && outDegree[current] <= 1){currentPath.push_back(current);current = previous[current];}
        if(currentPath.size() > bestPath.size()){bestPath = currentPath;}
    }
        

    printf("%ld\n", bestPath.size());
    for(int k = bestPath.size() - 1; k >= 0; k--){printf("%ld ", 1 + bestPath[k]);}
    puts("");

    return 0;
}
