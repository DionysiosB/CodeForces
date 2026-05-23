#include <cstdio>
#include <iostream>
#include <map>

int main(){

    std::map<char,int> count;
    count.insert(std::pair<char,int>('A',0));
    count.insert(std::pair<char,int>('B',0));
    count.insert(std::pair<char,int>('C',0));

    for(int k = 0; k < 3; k++){
        std::string temp; getline(std::cin, temp);
        if(temp[1] == '<'){++count[temp[2]];}
        else{++count[temp[0]];}
    }

    if(count['A'] == 1 && count['B'] == 1 && count['C'] == 1){puts("Impossible");}
    else{
        if(count['A'] == 0){printf("A");}
        else if(count['B'] == 0){printf("B");}
        else if(count['C'] == 0){printf("C");}

        if(count['A'] == 1){printf("A");}
        else if(count['B'] == 1){printf("B");}
        else if(count['C'] == 1){printf("C");}

        
        if(count['A'] == 2){printf("A");}
        else if(count['B'] == 2){printf("B");}
        else if(count['C'] == 2){printf("C");}
    }
    puts("");

    return 0;
}
