#include <cstdio>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main(){

    std::map<std::string,std::string> numDays;
    numDays.insert(std::pair<std::string, std::string>("01","31"));
    numDays.insert(std::pair<std::string, std::string>("02","28"));
    numDays.insert(std::pair<std::string, std::string>("03","31"));
    numDays.insert(std::pair<std::string, std::string>("04","30"));
    numDays.insert(std::pair<std::string, std::string>("05","31"));
    numDays.insert(std::pair<std::string, std::string>("06","30"));
    numDays.insert(std::pair<std::string, std::string>("07","31"));
    numDays.insert(std::pair<std::string, std::string>("08","31"));
    numDays.insert(std::pair<std::string, std::string>("09","30"));
    numDays.insert(std::pair<std::string, std::string>("10","31"));
    numDays.insert(std::pair<std::string, std::string>("11","30"));
    numDays.insert(std::pair<std::string, std::string>("12","31"));

    size_t startYear = 2013, endYear = 2015;
    const size_t L = 10;

    std::string input; getline(std::cin, input);
    std::map<std::string, long> dates;

    for(size_t k = 0; k <= input.size() - L; k++){
        std::string current = input.substr(k, L);
        if(current[2] != '-' || current[5] != '-'){continue;}
        if(current[0] < '0' || current[0] > '3'){continue;}
        if(current[1] < '0' || current[0] > '9'){continue;}
        if(current[3] < '0' || current[3] > '1'){continue;}
        if(current[4] < '0' || current[4] > '9'){continue;}
        if(current[6] != '2' || current[7] != '0' || current[8] != '1'){continue;}
        if(current[9] < '3' || current[9] > '5'){continue;}


        std::string currentMonthStr = current.substr(3,2);
        const char * currentMonth = currentMonthStr.c_str();
        const char minMonth[] = {'0','1'};
        const char maxMonth[] = {'1','2'};
        if(std::lexicographical_compare(currentMonth, currentMonth + 2, minMonth, minMonth + 2 ) || std::lexicographical_compare(maxMonth, maxMonth + 2, currentMonth, currentMonth + 2)){continue;}

        std::string currentDaysStr = current.substr(0,2);
        const char * currentDays = currentDaysStr.c_str();
        const char minDays[] = {'0', '1'};
        const char * maxDays = numDays[currentMonthStr].c_str();
        if(std::lexicographical_compare(currentDays, currentDays + 2, minDays, minDays + 2) || std::lexicographical_compare(maxDays, maxDays + 2, currentDays, currentDays + 2)){continue;}

        if(dates.find(current) != dates.end()){++dates[current];}
        else{dates.insert(std::pair<std::string, int>(current, 1));}

    }


    std::map<std::string, long>::iterator mapIter;

    std::string maxDate = "";
    long maxOccurence = 0;
    for(mapIter = dates.begin(); mapIter != dates.end(); mapIter++){
        //std::cout << mapIter->first <<  "    "  << mapIter -> second  << std::endl;
        if(mapIter->second > maxOccurence){maxDate = mapIter->first; maxOccurence = mapIter->second;}
    }


    std::cout << maxDate << std::endl;

    return 0;
}
