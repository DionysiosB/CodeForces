#include <iostream>
#include <vector>

int myabs(int x){return (x > 0 ? x : -x);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m; scanf("%ld", &m);
        for(long p = 1; p <= m; p++){
            std::string s; std::cin >> s;
            int w(1), i(1), n(1);
            for(size_t p = 0; p < s.size(); p++){
                if(s[p] == 'w'){++w;}
                else if(s[p] == 'i'){++i;}
                else if(s[p] == 'n'){++n;}
            }

            if(w > 0){wr.push_back(p);}
            else if(w < 0){wd.push_back(p);}

            if(i > 0){ir.push_back(p);}
            else if(i < 0){id.push_back(p);}

            if(n > 0){nr.push_back(p);}
            else if(n < 0){nd.push_back(p);}
        }

        long cnt = wr.size() + ir.size() + nr.size();
    }

}
