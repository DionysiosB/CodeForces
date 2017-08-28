#include <iostream>

int main(){

    std::string season; std::cin >> season;
    if(season == "December" || season == "January" || season == "February"){std::cout << "winter";}
    if(season == "March" || season == "April" || season == "May"){std::cout << "spring";}
    if(season == "June" || season == "July" || season == "August"){std::cout << "summer";}
    if(season == "September" || season == "October" || season == "November"){std::cout << "autumn";}

    return 0;
}
