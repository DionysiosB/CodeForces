#include <cstdio>
#include <iostream>
#include <string>

int main(){

    int n, p; scanf("%d %d\n", &n, &p);
    std::string s; getline(std::cin, s);
    int pos = n - 1; ++s[pos];
    
    while(pos >= 0 && pos < n){
        if(s[pos] >= 'a' + p){s[pos] = 'a'; ++s[--pos];}
        else if(pos > 0 && s[pos] == s[pos - 1]){++s[pos];}
        else if(pos > 1 && s[pos] == s[pos - 2]){++s[pos];}
        else{++pos;}
    }

    if(pos < 0){puts("NO");}
    else{std::cout << s << std::endl;}

    return 0;
}
