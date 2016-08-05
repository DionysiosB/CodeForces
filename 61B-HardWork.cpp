#include <iostream>
#include <string>

std::string convert(std::string s){
    std::string output("");
    for(int p = 0; p < s.size(); p++){
        if('a' <= s[p] && s[p] <= 'z'){output += s[p];}
        else if('A' <= s[p] && s[p] <= 'Z'){output += (s[p] - 'A' + 'a');}
    }
    return output;
}



int main(){

    std::string a; getline(std::cin, a); a = convert(a);
    std::string b; getline(std::cin, b); b = convert(b);
    std::string c; getline(std::cin, c); c = convert(c);

    int n; scanf("%d\n", &n);
    while(n--){
        std::string x; getline(std::cin, x); x = convert(x);
        if(x == a + b + c || x == a + c + b || x == b + a + c || x == b + c + a || x == c + a + b || x == c + b + a){puts("ACC");}
        else{puts("WA");}
    }

    return 0;
}
