#include <iostream>
#include <map>
#include <set>

int main(){

    const long N = 26;
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::map<char, char> left, right;
    std::set<char> present;
    std::set<std::string> snippets;

    std::set<char> done;
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        for(long u = 0; u < s.size(); u++){present.insert(s[u]);}
        for(long u = 0; u + 1 < s.size(); u++){right[s[u]] = s[u + 1]; done.insert(s[u + 1]);}
    }

    for(long p = 0; p < N; p++){
        char c = 'a' + p;
        if(!present.count(c) || done.count(c)){continue;}
        std::string s(""); s += c;
        while(right.count(c)){c = right[c]; s += c;}
        snippets.insert(s);
    }

    for(std::set<std::string>::iterator it = snippets.begin(); it != snippets.end(); it++){std::cout << (*it);}
    std::cout << std::endl;

    return 0;
}
