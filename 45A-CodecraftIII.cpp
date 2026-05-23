#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

int main(){

    const int N = 12;
    std::vector<std::string> months(N);
    months[0] = "January"; months[1] = "February"; months[2] = "March"; months[3] = "April"; 
    months[4] = "May"; months[5] = "June"; months[6] = "July"; months[7] = "August"; 
    months[8] = "September"; months[9] = "October"; months[10] = "November"; months[11] = "December"; 

    std::string current; getline(std::cin, current);
    int start(0);
    for(int p = 0; p < N; p++){if(months[p] == current){start = p; break;}}
    int wait; std::cin >> wait;
    std::cout << months[(start + wait) % N] << std::endl;

    return 0;
}
