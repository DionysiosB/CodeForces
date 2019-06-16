#include <iostream>

int main(){

    std::string s; getline(std::cin, s);
    int ans(-1);
    bool done(0);

    for(int p = 0; p < s.size(); p++){
        int ts = (s[p] - '0');
        if(ts % 8 == 0){ans = ts; done = 1;}
        if(done){break;}
        for(int q = p + 1; q < s.size(); q++){
            int td = 10 * (s[p] - '0') + (s[q] - '0');
            if(td % 8 == 0){ans = td; done = 1;}
            if(done){break;}
            for(int r = q + 1; r < s.size(); r++){
                int test = 100 * (s[p] - '0') + 10 * (s[q] - '0') + (s[r] - '0');
                if(test % 8 == 0){ans = test; done = 1;}
            }
        }
    }

    if(ans >= 0){std::cout << "YES\n" << ans << std::endl;}
    else{std::cout << "NO" << std::endl;}

    return 0;
}
