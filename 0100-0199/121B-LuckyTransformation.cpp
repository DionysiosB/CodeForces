#include <iostream>

int main(){

    long n,k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    for(int p = 0; p < s.length() && k; p++){
      if(s[p] == '4' && s[p + 1] == '7'){
        if(p % 2 == 0){s[p] = s[p + 1] = '4';}
        else if(s[p - 1] == '4'){if(k % 2 == 0){s[p]='4';} else{s[p] = '7';} break;}
        else{s[p] = s[p+1] = '7';}
        k--;
      }
    }

    std::cout << s << std::endl;

    return 0;
}
