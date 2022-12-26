#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t n, k, a, b; std::cin >> n >> k >> a >> b;

    int64_t count(0);
    char gc('G'), bc('B');

    if(a > b){
        int64_t t = a; a = b; b = t;
        char u = gc; gc = bc; bc = u;
    }


    if(b > (a + 1) * k){std::cout << "NO" << std::endl;}
    else{
        for(int64_t p = 0; p < n; p++){
            if(b > a && count < k){std::cout << bc; --b; ++count;}
            else{std::cout << gc; --a; count = 0;}
        }
        std::cout << std::endl;
    }

    return 0;
}
