#include <cstdio>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>


std::string getReferenceAddress(std::string input){

    const std::string bmail = "bmail.com";
    long sep = input.find("@");
    std::string login = input.substr(0, sep);
    std::string domain = input.substr(sep + 1);

    for(int p = 0; p < domain.size(); p++){domain[p] = tolower(domain[p]);}

    std::string actualLogin = "";
    for(int p = 0; p < login.size(); p++){
        if(login[p] == '.' && domain.compare(bmail) == 0){continue;}
        if(login[p] == '+' && domain.compare(bmail) == 0){break;}
        actualLogin += tolower(login[p]);
    }

    std::string output = actualLogin + "@" + domain;
    return output;
}

int main(){

    long n; scanf("%ld\n", &n);
    std::map<std::string, std::vector<std::string> > groups;

    while(n--){
        std::string email;
        getline(std::cin, email);
        std::string processed = getReferenceAddress(email);

        if(groups.count(processed) > 0){
            groups[processed].push_back(email);
        }
        else{
            std::vector<std::string> vec;
            vec.push_back(email);
            groups.insert(std::pair<std::string, std::vector<std::string> >(processed, vec));
        }
    }

    std::cout << groups.size() << std::endl;
    std::map<std::string, std::vector<std::string> >::iterator mapIter;
    for(mapIter = groups.begin(); mapIter != groups.end(); mapIter++){
        std::string key = mapIter->first;
        std::vector<std::string> vec = mapIter->second;
        std::cout << vec.size() << " ";
        for(int p = 0; p < vec.size(); p++){std::cout << vec[p] << " ";}
        puts("");
    }

    return 0;
}
