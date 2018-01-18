#include <iostream>
#include <map>

int main(){

    std::string s; std::cin >> s;
    std::map<char, int> needed;
    std::map<char, int> got;
    needed['B'] = 1; needed['u'] = 2; needed['l'] = 1; needed['b'] = 1; needed['a'] = 2; needed['s'] = 1; needed['r'] = 1;
    got['B'] = 0; got['u'] = 0; got['l'] = 0; got['b'] = 0; got['a'] = 0; got['s'] = 0; got['r'] = 0;



    for(size_t p = 0; p < s.size(); p++){
        if(got.count(s[p]) == 0){continue;}
        ++got[s[p]];
    }

    long count(1e5);
    for(std::map<char, int>::iterator mapIter = got.begin(); mapIter != got.end(); mapIter++){
        char key = mapIter->first;
        int have = mapIter->second;
        int need = needed[key];
        count = (count < (have / need)) ? count : (have / need);
    }

    std::cout << count << std::endl;

    return 0;
}
