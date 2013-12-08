#include <cstdio>
#include <iostream>

int main(){

    int n; scanf("%d\n", &n);
    std::string line(""); int total(0);
    getline(std::cin, line);
    for(int k = n; k < line.size(); k += n){if(line[k - 1] == line[k - 2] && line[k-2] == line[k-3]){++total;}}
    printf("%d\n", total);
    return 0;
}
