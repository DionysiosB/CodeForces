#include <iostream>
#include <vector>
#include <set>

int main(){

    const int N = 26;
    int n; scanf("%d\n", &n);
    std::vector<std::vector<int> > count(N, std::vector<int>(N, 0));
    int currentMax = 0;

    while(n--){
        std::string temp; getline(std::cin, temp);
        std::set<char> chars;
        for(int p = 0; p < temp.size(); p++){chars.insert(temp[p]);}
        if(chars.size() > 2){continue;}
        int small = *chars.begin() - 'a';
        if(chars.size() == 1){
            for(int p = 0; p < N; p++){
                count[small][p] += temp.size(); 
                if(p == small) continue;
                count[p][small] += temp.size();}
        }
        else{
            int large = *(++chars.begin()) - 'a';
            count[small][large] += temp.size(); 
            count[large][small] += temp.size();
        }
    }

    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            if(currentMax < count[row][col]){currentMax = count[row][col];}
        }
    }

    std::cout << currentMax << std::endl;

    return 0;
}
