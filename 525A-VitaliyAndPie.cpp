#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 26;

    long n; scanf("%ld\n", &n);
    std::string s; getline(std::cin, s);
    std::vector<long> keyBag(N, 0);
    long count(0);

    for(int p = 0; p < 2 * n - 2; p++){
        if(p % 2){
            if(keyBag[s[p] - 'A'] > 0){--keyBag[s[p] - 'A'];}
            else{++count;}
        }
        else{++keyBag[s[p] - 'a'];}
    }

    std::cout << count << std::endl;


    return 0;
}
