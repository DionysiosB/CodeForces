#include <cstdio>
#include <iostream>

int main(){

    std::string a, b; 
    getline(std::cin, a);
    getline(std::cin, b);

    long ftos(0), stof(0);

    for(int k = 0; k < a.size(); k++){
        if(a[k] == '4' && b[k] == '7'){++ftos;}
        else if(a[k] == '7' && b[k] == '4'){++stof;}
    }

    printf("%ld\n", (ftos > stof) ? ftos : stof);

    return 0;
}
