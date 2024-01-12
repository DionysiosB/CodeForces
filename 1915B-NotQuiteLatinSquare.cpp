#include <iostream>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        char m('A');
        for(long row = 0; row < 3; row++){
            std::string s; std::cin >> s;
            bool a(false), b(false), c(false);
            for(long col = 0; col < 3; col++){
                if(s[col] == 'A'){a = true;}
                else if(s[col] == 'B'){b = true;}
                else if(s[col] == 'C'){c = true;}
            }
            if(!a){m = 'A';}
            else if(!b){m = 'B';}
            else if(!c){m = 'C';}
        }

        std::cout << m << std::endl;
    }

}
