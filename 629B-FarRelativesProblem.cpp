#include <iostream>
#include <vector>

int main(){

    const int D = 367;
    std::vector<std::vector<int> > count(D, std::vector<int>(2, 0));

    int n; std::cin >> n;
    while(n--){
        std::string s; int a; int b; 
        std::cin >> s >> a >> b;
        int x = (s[0] == 'M') ? 0 : 1;
        for(int p = a; p <= b; p++){++count[p][x];}
    }

    int ans(0);
    for(int p = 1; p < D; p++){
        int m = count[p][0];
        int f = count[p][1];
        int a = 2 * ((m < f) ? m : f);
        if(a > ans){ans = a;}
    }

    std::cout << ans << std::endl;

    return 0;
}
