#include <iostream>
#include <map>

int main(){

    std::map<std::string, long> m;
    m["Tetrahedron"] = 4; m["Cube"] = 6; 
    m["Octahedron"] = 8; m["Dodecahedron"] = 12; 
    m["Icosahedron"] = 20;

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n; 
    long total(0);
    while(n--){std::string s; std::cin >> s; total += m[s];}
    std::cout << total << std::endl;

    return 0;
}
