#include <iostream>
#include <vector>
#include <set>

int main(){

    const int N = 26;
    std::string s; std::cin >> s;
    std::vector<long> count(N, 0);
    std::set<char> missing; for(int p = 0; p < N; p++){missing.insert('A' + p);}

    long ind(0), q(0);

    while((missing.size() > q) && (ind < s.size())){

        if(ind >= N){
            if(s[ind - N] == '?'){--q;}
            else{--count[s[ind - N] - 'A']; if(count[s[ind - N] - 'A'] == 0){missing.insert(s[ind - N]);}}
        }

        if(s[ind] == '?'){++q;}
        else{++count[s[ind] - 'A']; if(count[s[ind] - 'A'] <= 1){missing.erase(s[ind]);}}

        ++ind;
    }
    
    if(missing.size() > q){std::cout << "-1" << std::endl; return 0;}

    for(int p = ind - N; p < ind; p++){if(s[p] == '?'){char x = *missing.begin(); s[p] = x; missing.erase(x);}}
    for(int p = 0; p < s.size(); p++){if(s[p] == '?'){s[p] = 'A';}}
    std::cout << s << std::endl;

    return 0;
}
