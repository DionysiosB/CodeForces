#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;

        long mx(0);
        for(long p = 0; p < a.size(); p++){
            for(long q = 0; q < b.size(); q++){
                for(long r = 0; p + r < a.size() && q + r < b.size(); r++){
                    if(a[p + r] == b[q + r]){mx = (mx > r + 1) ? mx : (r + 1);}
                    else{break;}
                }
            }
        }

        long ans = a.size() + b.size() - 2 * mx;

        std::cout << ans << std::endl;
    }

}
