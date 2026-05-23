#include <iostream>
#include <cstdio>

int main(){

    std::string line; getline(std::cin, line);
    long numTests; scanf("%ld\n", &numTests);
    
    long total = 0;
    long *count = new long[line.size()];
    count[0] = 0;
    for(int k = 1; k < line.size(); k++){count[k] = (line[k - 1] == line[k]) ? ++total : total;}
    
    long left(0), right(0);
    while(numTests--){
        scanf("%ld %ld\n", &left, &right);
        printf("%ld\n", count[right - 1] - count[left - 1]);
    }
    return 0;
}
