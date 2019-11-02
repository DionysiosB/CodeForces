#include<iostream>
#include<vector>
#include<algorithm>
#include <ctime>
 
void mysleep(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while(goal > clock());
}


int main(){

    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    sort(a.begin(), a.end());
    for(int p = 0; p < n; p++){std::cout << a[p] << " ";}
    std::cout << std::endl;
    mysleep(11000000);

    return 0;
}
