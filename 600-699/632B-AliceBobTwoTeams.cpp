#include <iostream>
#include <vector>

int main(){


    int64_t n; std::cin >> n;
    std::vector<int64_t> strength(n, 0);
    for(int64_t p = 0; p < n; p++){std::cin >> strength[p];}
    std::string s; std::cin >> s;

    std::vector<int64_t> aleft(n + 1, 0);
    std::vector<int64_t> aright(n + 1, 0);
    std::vector<int64_t> bleft(n + 1, 0);
    std::vector<int64_t> bright(n + 1, 0);


    for(int64_t p = 1; p <= n; p++){
        aleft[p] = aleft[p - 1] + strength[p - 1] * (s[p - 1] == 'A');
        bleft[p] = bleft[p - 1] + strength[p - 1] * (s[p - 1] == 'B');
    }


    for(int64_t p = n - 1; p >= 0; p--){
        aright[p] = aright[p + 1] + strength[p] * (s[p] == 'A');
        bright[p] = bright[p + 1] + strength[p] * (s[p] == 'B');
    }

    //for(int64_t p = 0; p <= n; p++){std::cout << p << "\t" << bleft[p]  << " " << bright[p] << std::endl;}

    int64_t ans(0);
    for(int64_t p = 0; p <= n; p++){
        if(aleft[p] + bright[p] > ans){ans = aleft[p] + bright[p];}
        if(bleft[p] + aright[p] > ans){ans = bleft[p] + aright[p];}
    }


    std::cout << ans << std::endl;

    return 0;
}
