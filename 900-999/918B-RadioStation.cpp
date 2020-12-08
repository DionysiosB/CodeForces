#include <iostream>
#include <map>

int main(){

    long n, m; std::cin >> n >> m;
    std::map<std::string, std::string> sl;
    while(n--){
        std::string name, ip; std::cin >> name >> ip;
        sl[ip] = name;
    }

    while(m--){
        std::string command, ip; std::cin >> command >> ip;
        ip.erase(ip.size() - 1, 1);
        std::cout << command << " " << ip << "; #" << sl[ip] << std::endl;
    }

    return 0;
}
