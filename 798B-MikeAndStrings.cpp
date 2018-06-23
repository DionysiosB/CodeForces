#include<iostream>
#include<vector>
#include<string>

int main(){

    int n; std::cin >> n;
    std::vector<std::string> s(n);
    for(int p = 0; p < n; p++){std::cin >> s[p];}


    int total = n * s[0].size();

    for(int p = 0; p < n; p++){

        long sum=0;
        for(int k = 0; k < n; k++){
            std::string t = s[k];
            while(t != s[p]){
                t = t.substr(1) + t[0];
                ++sum; if(sum >  n * s[0].size()){total = -1; break;}}
        }

        total = (total < sum) ? total : sum;
    }

    std::cout << total << std::endl;
}
