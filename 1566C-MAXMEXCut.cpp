#include <iostream>

int main(){
    
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long cnt(0); bool z(0);
        cnt += 2 * (a[0] != b[0]) + (a[0] == '0' && b[0] == '0');
        for(long p = 1; p < n; p++){
            if(a[p] != b[p]){cnt += 2; z = 0;}
            else if(a[p] == '1'){cnt += 2 * z; z = 0;}
            else{cnt += 1 + (a[p - 1] == '1' && b[p - 1] == '1'); z = 1;}
            //std::cout << a[p] << "|" << b[p] << " " << cnt << std::endl;
        }

        std::cout << cnt << std::endl;
    }

}
