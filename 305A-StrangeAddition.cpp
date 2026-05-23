#include <cstdio>
#include <set>

int main(){

    int n(0); scanf("%d", &n);

    int count(0); 
    std::set<int> chosen;
    int alternative(-1);
    bool typeA(0), typeB(0), typeC(0);


    while(n--){

        int temp; scanf("%d", &temp);
        if(temp == 0){chosen.insert(0);}
        else if(temp == 100){chosen.insert(100);}
        else if(!typeA && temp < 10){chosen.insert(temp); typeA = 1;}
        else if(!typeB && temp % 10 == 0){chosen.insert(temp); typeB = 1;}
        else {alternative = temp; typeC = 1;}
    }


    if(!typeA && !typeB && alternative > 0){chosen.insert(alternative);}

    printf("%lu\n", chosen.size());
    std::set<int>::iterator setIter;
    for(setIter = chosen.begin(); setIter != chosen.end(); setIter++){printf("%d ", *setIter);}
    puts("");

    return 0;
}
