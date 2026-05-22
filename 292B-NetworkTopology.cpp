#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long *degree = new long[n + 1];
    long first(0), second(0);
    for(long node = 0; node <= n; node++){degree[node] = 0;}
    for(long row = 0; row < m; row++){scanf("%ld %ld", &first, &second); ++degree[first]; ++degree[second];} 
    std::sort(degree, degree + n + 1);

    std::string output("unknown");
    if(degree[1] == 2 && degree[n] == 2){output = "ring";}
    else if(degree[1] == 1 && degree[n - 1] == 1 && degree[n] == n - 1){output = "star";}
    else if(degree[1] == 1 && degree[2] == 1 && degree[n] == 2){output = "bus";} 
    else{output = "unknown";}

    std::cout << output << " topology" << std::endl;

    return 0;
}
