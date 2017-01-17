#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> x(n);
    for(int p = 0; p < n; p++){scanf("%d", &x[p]);}
    int moves = (n - x[0]) % n;

    std::string ans("Yes");

    for(int p = 1; p < n; p++){
        int active = (p % 2) ? ((x[p] + n - moves) % n) : ((x[p] + moves) % n); 
        if(active != p){ans = "No"; break;}
    }

    std::cout << ans << std::endl;

    return 0;
}
