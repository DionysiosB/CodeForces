#include <cstdio>
#include <iostream>
#include <string>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::string horizontal; getline(std::cin, horizontal);
    std::string vertical; getline(std::cin, vertical);
    std::string cycle = std::string("") + horizontal[0] + vertical[0] + horizontal[n - 1] + vertical[m - 1];
    if(cycle == "<v>^" || cycle == ">^<v"){puts("YES");} else{puts("NO");}

    return 0;
}
