#include <iostream>


int main(){


    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        bool done(false);
        for(char p = 'a'; p <= 'z'; p++){
            std::string t = std::string(1, p);
            if(s.find(t) == std::string::npos){std::cout << t << std::endl; done = true; break;}
        }

        for(char p = 'a'; p <= 'z'; p++){
            if(done){break;}
            for(char q = 'a'; q <= 'z'; q++){
                std::string t = std::string(1, p); t.push_back(q);
                if(s.find(t) == std::string::npos){std::cout << t << std::endl; done = true; break;}
            }
        }

        for(char p = 'a'; p <= 'z'; p++){
            if(done){break;}
            for(char q = 'a'; q <= 'z'; q++){
                if(done){break;}
                for(char r = 'a'; r <= 'z'; r++){
                    std::string t = std::string(1, p); t.push_back(q); t.push_back(r);
                    if(s.find(t) == std::string::npos){std::cout << t << std::endl; done = true; break;}
                }
            }
        }

    }

}
