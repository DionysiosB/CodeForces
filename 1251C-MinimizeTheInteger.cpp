#include <iostream>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        std::string s; std::cin >> s;
        std::string x(""), y("");
        for(long p = 0; p < s.size(); p++){
            if((s[p] - 'a') % 2){x += s[p];}
            else{y += s[p];}
        }

        long a(0), b(0);
        while(a < x.size() || b < y.size()){
            if(a < x.size() && b < y.size()){
                if(x[a] < y[b]){std::cout << x[a]; ++a;}
                else{std::cout << y[b]; ++b;}
            }
            else if(a < x.size()){std::cout << x[a]; ++a;}
            else if(b < y.size()){std::cout << y[b]; ++b;}
        }
        std::cout << std::endl;
    }

    return 0;
}
