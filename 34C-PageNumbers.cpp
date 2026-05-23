#include <iostream>
#include <vector>

std::vector<int> parseString(std::string s){

    int x(0);
    std::vector<int> nums;
    for(long p = 0; p < s.size(); p++){
        if(s[p] == ','){nums.push_back(x); x = 0;}
        else{x = 10 * x + (s[p] - '0');}
    }
    nums.push_back(x);
    return nums;
}

int main(){

    const long N = 1111;
    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    std::vector<int> nums = parseString(s);
    std::vector<bool> a(N, 0);
    for(long p = 0; p < nums.size(); p++){a[nums[p]] = true;}

    long from(-1), initial(1);
    for(long p = 0; p < N; p++){
        if(!a[p]){
            if(from >= 0){
                long to = p - 1;
                if(!initial){std::cout << ",";}
                initial = false;
                if(from < to){std::cout << from << "-" << to;}
                else{std::cout << from;}
            }
            from = -1;
        }
        else if(a[p] && from < 0){from = p;}
    }

    std::cout << std::endl;

    return 0;
}
