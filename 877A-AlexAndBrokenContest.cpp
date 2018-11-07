#include <iostream>
#include <string>

int main(){

    std::string s; std::cin >> s;
    int count(0), pos(0);
    pos = 0; while((pos = s.find("Danil", pos)) != std::string::npos){++count; ++pos;}
    pos = 0; while((pos = s.find("Olya", pos)) != std::string::npos){++count; ++pos;}
    pos = 0; while((pos = s.find("Slava", pos)) != std::string::npos){++count; ++pos;}
    pos = 0; while((pos = s.find("Ann", pos)) != std::string::npos){++count; ++pos;}
    pos = 0; while((pos = s.find("Nikita", pos)) != std::string::npos){++count; ++pos;}
    std::cout << (count == 1 ? "YES" : "NO") << std::endl;

    return 0;
}
