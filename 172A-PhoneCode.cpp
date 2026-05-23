#include <cstdio>
#include <iostream>

int main(){

    int n;scanf("%d\n", &n);

    std::string first(""), newString("");
    getline(std::cin, first);
    int codeLength = first.size(), newLength = first.size();
    
    while(--n){
        getline(std::cin, newString);
        for(int index = codeLength - 1; index >= 0; index--){if(first[index] != newString[index]){newLength = index;}}
        codeLength = newLength;
    }

    printf("%d\n", codeLength);
    return 0;
}
