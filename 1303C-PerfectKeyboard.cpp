#include <iostream>
#include <vector>
#include <set>

int main(){

    const int B = 26;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<std::set<int> > f(B);
        bool single(true);
        for(long p = 0; p < s.size(); p++){
            int x = s[p] - 'a';
            if(p > 0){int y = s[p - 1] - 'a'; if(y != x){f[x].insert(y); f[y].insert(x); single = false;}}
            if(p + 1 < s.size()){int y = s[p + 1] - 'a'; if(y != x){f[x].insert(y); f[y].insert(x); single = false;}}
        }

        if(single){
            std::string res = "";
            for(long p  = 0; p < B; p++){res += (char)('a' + p);}
            std::cout << "YES" << std::endl << res << std::endl;
            continue;
        }
        
        bool possible(true);
        int start(-1);
        for(long p = 0; p < B; p++){
            if(f[p].size() > 2){possible = false; break;}
            if(f[p].size() == 1){start = p;}
        }

        possible = possible && (start >= 0);

        if(!possible){std::cout << "NO" << std::endl; continue;}
        else{
            std::vector<bool> done(B, 0);
            int cur(start), prev(start);
            std::string res("");
            while(!done[cur]){
                done[cur] = true;
                res = (char)('a' + cur) + res;
                std::set<int> g = f[cur];
                int first = *g.begin();
                int last = *g.rbegin();
                if(!done[first]){cur = first;}
                else if(!done[last]){cur = last;}
                else{break;}
            }

            for(long p = 0; p < B; p++){
                if(done[p]){continue;}
                res = res + (char)('a' + p);
            }

            std::cout << "YES" << std::endl;
            std::cout << res << std::endl;
        }
    }

    return 0;
}
