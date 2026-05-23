#include <iostream>

int main(){

    std::string a; std::cin >> a;
    int64_t total(1), count(0);
    for (int p = 0; p < a.size(); p++){
        if((a[p] - '0') + (a[p + 1] - '0') == 9){++count;} 
        else{
            if(count % 2 == 0){total *= (1 + (count + 1) / 2);}
            count=0;
        }
    }

    std::cout << total << std::endl;

    return 0;
}
