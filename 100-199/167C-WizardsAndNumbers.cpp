#include <iostream>

bool dfs(int64_t a, int64_t b){

    if(a == 0){return true;}
    if(dfs(b % a, a)){return false;}
    if(a % 2 == 1){return (b / a) % 2;}
    return (b / a) % (a + 1) % 2;
}

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){
        int64_t a, b; scanf("%lld %lld\n", &a, &b);
        if(a > b){int64_t c = a; a = b; b = c;}
        std::cout << (dfs(a, b) ? "Second" : "First") << std::endl;
    }

    return 0;
}
