#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        if(a[0] == b[0]){std::cout << "YES\n" << a[0] << "*" << std::endl;}
        else if(a.back() == b.back()){std::cout << "YES\n*" << a.back() << std::endl;}
        else{
            long idx(0);
            for(long p = 1; !idx && p < a.size(); p++){
                for(long q = 1; !idx && q < b.size(); q++){
                    if((a[p - 1] == b[q - 1]) && (a[p] == b[q])){idx = p;}
                }
            }

            if(idx){std::cout << "YES\n*" << a[idx - 1] << a[idx] << "*" << std::endl;}
            else{std::cout << "NO" << std::endl;}
        }
    }

}
