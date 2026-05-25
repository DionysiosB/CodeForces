#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string b; std::cin >> b;
        long prev('0'); std::string a(b);
        for(long p = 0; p < n; p++){
            if(b[p] == '0' && prev != '1'){a[p] = '1'; prev = '1';}
            else if(b[p] == '0'){a[p] = '0'; prev = '0';}
            else if(b[p] == '1' && prev != '2'){a[p] = '1'; prev = '2';}
            else if(b[p] == '1'){a[p] = '0'; prev = '1';}
        }

        std::cout << a << std::endl;

    }

}
