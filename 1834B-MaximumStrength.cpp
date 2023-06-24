#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        long diff = a.size() - b.size();
        if(diff > 0){b = std::string(diff, '0') + b;}
        else if(diff < 0){a = std::string(-diff, '0') + a;}

        long cnt(0);
        for(long p = 0; p < a.size(); p++){
            int dist = a[p] - b[p];
            if(!dist){continue;}
            cnt = ((dist > 0) ? dist : -dist);
            cnt += 9 * (a.size() - 1 - p);
            break;
        }


        std::cout << cnt << std::endl;
    }

}
