#include <iostream>

int main(){

    const int N = 10;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        int ga(0), gb(0), ua(0), ub(0), ra(5), rb(5);
        int mlen(10);
        for(long p = 0; p < s.size(); p++){
            if(p % 2 == 0){
                --ra;
                if(s[p] == '1'){++ga;}
                else if(s[p] == '?'){++ua;}
            }
            else{
                --rb;
                if(s[p] == '1'){++gb;}
                else if(s[p] == '?'){++ub;}
            }


            if(ga + ua > gb + rb){mlen = p + 1; break;}
            else if(gb + ub > ga + ra){mlen = p + 1; break;}
        }

        printf("%d\n", mlen);
    }
}
