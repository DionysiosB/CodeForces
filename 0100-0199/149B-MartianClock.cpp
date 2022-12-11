#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::string time; getline(std::cin, time);
    std::vector<int> hour, minute;

    bool flag(0); int minBase(2);
    for(int p = 0; p < time.size(); p++){
        int c;
        if(time[p] == ':'){flag = 1; continue;}
        else if('0' <= time[p] && time[p] <= '9'){c = time[p] - '0';}
        else if('A' <= time[p] && time[p] <= 'Z'){c = 10 + time[p] - 'A';}

        if(!flag && (c > 0 || hour.size() > 0)){hour.push_back(c);}
        else if(flag && (c > 0 || minute.size() > 0)){minute.push_back(c);}
        if(c + 1 > minBase){minBase = c + 1;}
    }

    std::vector<int> ans;

    if((hour.size() == 0 || (hour.size() == 1 && hour[0] < 24)) && (minute.size() == 0 || (minute.size() == 1 && minute[0] < 60))){puts("-1");}
    else{
        for(int b = minBase; b <= 60; b++){
            bool possible = 1;
            int m = 0; for(int q = 0; q < minute.size(); q++){m = b * m + minute[q]; if(m >= 60){possible = 0; break;}}
            int h = 0; for(int q = 0; q < hour.size()  ; q++){h = b * h + hour[q]; if(h >= 24){possible = 0; break;}}
            if(possible){ans.push_back(b);}
        }

        if(ans.size() == 0){puts("0");}
        else{for(int p = 0; p < ans.size(); p++){printf("%d ", ans[p]);}; puts("");}
    }

    return 0;
}
