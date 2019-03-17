#include <iostream>
#include <vector>
#include <stack>

int main(){

    std::string s; getline(std::cin, s);
    std::vector<std::string> sv; std::vector<long> nv;
    std::string cur(""); bool state(0);

    for(long p = 0; p < s.size(); p++){
        if(s[p] == ','){
            if(state){
                long num(0); for(long k = 0; k < cur.size(); k++){num = 10 * num + (cur[k] - '0');}
                nv.push_back(num);
            }
            else{sv.push_back(cur);}
            cur = "";
            state = 1 - state;
        }
        else{cur += s[p];}
    }

    long num(0); for(long k = 0; k < cur.size(); k++){num = 10 * num + (cur[k] - '0');} nv.push_back(num);

    std::stack<long> st;
    std::vector<std::vector<std::string> > v;
    std::vector<std::string> tmp;
    long depth(0);
    for(long p = 0; p < sv.size(); p++){
        long level(0);
        if(!st.empty()){level = st.top(); st.pop();}
        while(level >= v.size()){v.push_back(tmp);}
        v[level].push_back(sv[p]);
        for(long u = 0; u < nv[p]; u++){st.push(level + 1);}
    }

    std::cout << v.size() << std::endl;
    for(long lvl = 0; lvl < v.size(); lvl++){
        if(v[lvl].size() == 0){continue;}
        for(long p = 0; p < v[lvl].size(); p++){std::cout << v[lvl][p] << " ";}
        std::cout << std::endl;
    }

    return 0;
}
