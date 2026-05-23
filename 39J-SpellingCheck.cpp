#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s, t; std::cin >> s >> t;

    long ind(0), pos(s.size() - 1); bool inc(false), possible(true);
    for(long p = 0; p < t.size(); p++){
        if(t[p] == s[ind]){++ind;}
        else if(!inc && t[p] == s[ind + 1]){pos = ind; ind += 2; inc = true;}
        else{possible = false; break;}
    }

    if(possible){
        std::vector<long> v;
        for(long p = pos; p >= 0; p--){
            if(s[p] == s[pos]){v.push_back(p + 1);}
            else{break;}
        }

        printf("%ld\n", v.size());
        for(long p = v.size() - 1; p >= 0; p--){printf("%ld ", v[p]);}
        puts("");
    }
    else{puts("0");}

    return 0;
}
