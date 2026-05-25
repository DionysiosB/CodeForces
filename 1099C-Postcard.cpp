#include <iostream>
#include <set>

int main(){

    std::string s; std::cin >> s;
    long n; std::cin >> n;

    std::string t;
    std::set<long> v, w;
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '?'){v.insert(t.size() - 1);}
        else if(s[p] == '*'){w.insert(t.size() - 1);}
        else{t += s[p];}
    }

    if(t.size() - v.size() - w.size() > n){std::cout << "Impossible" << std::endl;}
    else if(t.size() < n && w.size() == 0){std::cout << "Impossible" << std::endl;}
    else{
        long diff = n - t.size();
        for(long p = 0; p < t.size(); p++){
            if(diff < 0 && v.count(p)){++diff; v.erase(p);}
            else if(diff < 0 && w.count(p)){++diff; w.erase(p);}
            else if(diff > 0 && w.count(p)){diff += 1;  while(diff--){std::cout << t[p];}; w.erase(p); diff = 0;}
            else{std::cout << t[p];}
        }
    }

    std::cout << std::endl;

    return 0;
}
