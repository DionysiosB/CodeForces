#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(){

    const int N = 5;
    std::map<std::string, int> rem;
    std::map<std::string, std::vector<std::string> > pref;

    std::vector<std::string> temp;
    temp.clear(); temp.push_back("S"); temp.push_back("M"); temp.push_back("L"); temp.push_back("XL"); temp.push_back("XXL"); 
    pref.insert(std::pair<std::string, std::vector<std::string> >("S", temp));
    temp.clear(); temp.push_back("M"); temp.push_back("L"); temp.push_back("S"); temp.push_back("XL"); temp.push_back("XXL"); 
    pref.insert(std::pair<std::string, std::vector<std::string> >("M", temp));
    temp.clear(); temp.push_back("L"); temp.push_back("XL"); temp.push_back("M"); temp.push_back("XXL"); temp.push_back("S"); 
    pref.insert(std::pair<std::string, std::vector<std::string> >("L", temp));
    temp.clear(); temp.push_back("XL"); temp.push_back("XXL"); temp.push_back("L"); temp.push_back("M"); temp.push_back("S"); 
    pref.insert(std::pair<std::string, std::vector<std::string> >("XL", temp));
    temp.clear(); temp.push_back("XXL"); temp.push_back("XL"); temp.push_back("L"); temp.push_back("M"); temp.push_back("S"); 
    pref.insert(std::pair<std::string, std::vector<std::string> >("XXL", temp));


    int t; 
    scanf("%d", &t); rem.insert(std::pair<std::string, int>("S", t));
    scanf("%d", &t); rem.insert(std::pair<std::string, int>("M", t));
    scanf("%d", &t); rem.insert(std::pair<std::string, int>("L", t));
    scanf("%d", &t); rem.insert(std::pair<std::string, int>("XL", t));
    scanf("%d", &t); rem.insert(std::pair<std::string, int>("XXL", t));

    int n; scanf("%d", &n);
    for(int p = 0; p < n; p++){
        std::string s; std::cin >> s;
        for(int q = 0; q < N; q++){std::string cp = pref[s][q]; if(rem[cp] > 0){std::cout << cp << std::endl; --rem[cp]; break;}}
    }


    return 0;
}
