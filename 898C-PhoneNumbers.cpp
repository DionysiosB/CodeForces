#include <iostream>
#include <map>
#include <set>
#include <algorithm>

int main(){

    std::map<std::string, std::set<std::string> > m;
    long n; std::cin >> n; 
    while(n--){
        std::string name; std::cin >> name;
        long u; std::cin >> u;
        while(u--){
            std::string num; std::cin >> num;
            std::reverse(num.begin(), num.end());
            m[name].insert(num);
        }
    }

    std::cout << m.size() << std::endl;

    std::map<std::string, std::set<std::string> >::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        std::string name = it->first;
        std::set<std::string> ss = it->second;
        std::set<std::string>::iterator st, sa, sb;

        bool done(false);
        while(!done){
            done = true;
            for(sa = ss.begin(); sa != ss.end(); sa++){
                if(!done){break;}
                sb = sa; ++sb;
                while(sb != ss.end()){
                    std::string aa = *sa;
                    std::string bb = *sb;
                    if(bb.find(aa) == 0){ss.erase(sa); done = false; break;}
                    else{++sb;}
                }
            }
        }

        std::cout << name << " " << ss.size() << " ";
        for(st = ss.begin(); st != ss.end(); st++){
            std::string str = *st; 
            std::reverse(str.begin(), str.end());
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
