#include<iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        bool a(0), b(0);
        for(long x = 1; x <= n; x++){
            bool valid(true);
            long wa(0), wb(0), sa(0), sb(0);
            char last = 'N';
            for(long p = 0; p < n; p++){
                if(s[p] == 'A'){
                    ++wa;
                    if(wa == x){++sa; wa = 0; wb = 0; last = 'A';}
                }
                else if(s[p] == 'B'){
                    ++wb;
                    if(wb == x){++sb; wa = 0; wb = 0; last = 'B';}
                }
            }

            if(wa > 0 || wb > 0){valid = false;}
            if(sb == sa){valid = false;}
            if(sa > sb && last != 'A'){valid = false;}
            if(sb > sa && last != 'B'){valid = false;}

            if(valid){
                if(sa > sb){a = true;}
                else{b = true;}
            }
        }

        char res('?');
        if(a && !b){res = 'A';}
        else if(!a && b){res = 'B';}
        std::cout << res << std::endl;
    }

}
