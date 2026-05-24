#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::vector<bool> v(N, 1);
    int sum(N);
    long count(0);

    long n; std::cin >> n;
    while(n--){
        std::string action, word; std::cin >> action >> word;
        std::vector<bool> w(N, 0); for(int p = 0; p < word.size(); p++){w[word[p] - 'a'] = 1;}

        count += (sum == 1) && (n > 0) && (action[0] != '.');
        if(action[0] == '!'){for(int p = 0; p < N; p++){if(v[p] && !w[p]){v[p] = 0; --sum;}}}
        else if(action[0] == '.'){for(int p = 0; p < N; p++){if(v[p] && w[p]){v[p] = 0; --sum;}}}
        else if(action[0] == '?'){int letter = word[0] - 'a'; if(v[letter]){--sum;} v[letter] = 0;}
    }

    std::cout << count << std::endl;

    return 0;
}
