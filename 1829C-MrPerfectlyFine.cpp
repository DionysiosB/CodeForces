#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        long res(-1), a(-1), b(-1);
        for(long p = 0; p < n; p++){
            long m; std::string w; std::cin >> m >> w;
            if(w == "10"){
                if(a < 0){a = m;}
                else{a = (a < m ? a : m);}
            }
            else if(w == "01"){
                if(b < 0){b = m;}
                else{b = (b < m ? b : m);}
            }
            else if(w == "11"){
                if(res < 0){res = m;}
                else{res = (res < m ? res : m);}
            }
        }
        long sum = (a > 0 && b > 0) ? (a + b) : -1;
        if(res < 0 && sum > 0){res = sum;}
        else if(sum > 0){res = (res < sum ? res : sum);}
        
        std::cout << res << std::endl;
    }

}
