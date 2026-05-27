#include <iostream>


bool isPalindrome(std::string s){

    for(long p = 0; 2 * p < s.size(); p++){
        if(s[p] != s[s.size() - 1 - p]){return false;}
    }

    return true;
}


int main(){

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        if(!k){puts("1");}
        else if(isPalindrome(s)){puts("1");}
        else{puts("2");}
    }

}
