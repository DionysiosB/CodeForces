#include <cstdio>
#include <iostream>
#include <string>
#include <map>

int main(){

    long n, m; std::cin >> n >> m;
    std::map<std::string, std::string> write;
    while(m--){
        std::string first, second; std::cin >> first >> second;
        if(first.size() <= second.size()){second = first;}
        write.insert(std::pair<std::string, std::string>(first, second));
    }

    for(long p = 0; p < n; p++){
        std::string temp; std::cin >> temp;
        std::cout << write[temp] << " ";
    }
    puts("");

    return 0;
}
