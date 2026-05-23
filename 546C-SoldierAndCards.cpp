#include <cstdio>
#include <iostream>
#include <set>
#include <deque>

int main(){

    int n; scanf("%d\n", &n);
    std::deque<int> first; int a; scanf("%d", &a);
    for(int p = 0; p < a; p++){int temp; scanf("%d", &temp); first.push_back(temp);}

    std::deque<int> second; int b; scanf("%d", &b);
    for(int p = 0; p < b; p++){int temp; scanf("%d", &temp); second.push_back(temp);}

    std::set<std::pair<std::deque<int>, std::deque<int> > > states;

    int counter(0);
    while(first.size() > 0 && second.size() > 0 && states.count(std::pair<std::deque<int>, std::deque<int> >(first, second)) < 1){

        states.insert(std::pair<std::deque<int>, std::deque<int> >(first, second));

        int a = first.front(); first.pop_front();
        int b = second.front(); second.pop_front();

        if(a > b){first.push_back(b); first.push_back(a);}
        else{second.push_back(a); second.push_back(b);}

        ++counter;

    }
    
    if(first.size() > 0 && second.size() > 0){puts("-1");}
    else{printf("%d %d\n", counter, (first.size() > 0) ? 1 : 2);}

    return 0;
}
