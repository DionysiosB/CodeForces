#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n; std::cin >> n;
    std::string s; std::cin >> s;
    std::string t("");

    int ind(0);
    while(ind < n){
        if((ind <= n - 3) && s[ind] == 'o' && s[ind + 1] == 'g' && s[ind + 2] == 'o'){
            ind += 3;
            t += "***";
            while(ind <= n - 2 && s[ind] == 'g' && s[ind + 1] == 'o'){ind += 2;}
        }
        else{t += s[ind++];}
    }

    std::cout << t << std::endl;

    return 0;
}
