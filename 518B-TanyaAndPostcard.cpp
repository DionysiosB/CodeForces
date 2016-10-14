#include <iostream>
#include <map>

int main(){

    long yay(0), whoops(0);

    std::map<char, long> countMsg;
    std::string msg; getline(std::cin, msg);
    for(int p = 0; p < msg.size(); p++){
        if(countMsg.count(msg[p]) > 0){++countMsg[msg[p]];}
        else{countMsg.insert(std::pair<char, int>(msg[p], 1));}
    }

    std::map<char, long> countNews;
    std::string news; getline(std::cin, news);
    for(int p = 0; p < news.size(); p++){
        char letter = news[p];
        if(countMsg.count(letter) && countMsg[letter] > 0){++yay; --countMsg[letter]; continue;}
        if(countNews.count(letter) > 0){++countNews[letter];}
        else{countNews.insert(std::pair<char, int>(letter, 1));}
    }

    for(char letter = 'a'; letter <= 'z'; letter++){
        char capLetter = letter + 'A' - 'a';

        long msgCount(0);
        if(countMsg.count(letter) > 0){msgCount += countMsg[letter];}
        if(countMsg.count(capLetter) > 0){msgCount += countMsg[capLetter];}

        long newsCount(0); 
        if(countNews.count(letter) > 0){newsCount += countNews[letter];}
        if(countNews.count(capLetter) > 0){newsCount += countNews[capLetter];}

        if(msgCount <= newsCount){whoops += msgCount;}
        else{whoops += newsCount;}
    }

    std::cout << yay << " " << whoops << std::endl;

    return 0;
}
