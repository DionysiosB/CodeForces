#include <iostream>
#include <string>

int main(){

    std::string s; getline(std::cin, s);
    int m; scanf("%d\n", &m);
    while(m--){
        //std::cout << s << "    --->    ";
        long l, r, k; std::cin >> l >> r >> k;
        --l; --r; 
        const long length = r - l + 1;
        k %= length;
        std::string t = s.substr(l, length);
        for(long p = 0; p < length; p++){s[l + p] = t[(length - k + p)%length];}
        //std::cout << s << std::endl;
    }

    std::cout << s << std::endl;

    return 0;
}
