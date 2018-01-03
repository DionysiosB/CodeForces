#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    long left(0), length(0);
    long count[] = {0,0};
    for(int right = 0; right < n; right++){
        ++count[s[right] - 'a'];
        if(count[0] <= k || count[1] <= k){
            long test = right - left + 1;
            length = (length > test) ? length : test;
        }
        else{
            --count[s[left] - 'a']; 
            ++left;
        }
    }

    std::cout << length << std::endl;

    return 0;
}
