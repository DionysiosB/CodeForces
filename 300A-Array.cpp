#include <cstdio>
#include <vector>

int main(){
    int n; scanf("%d", &n);
    std::vector<int> first, second, third;
    int temp(0);
    for(int k = 0; k < n; k++){
        scanf("%d", &temp);
        if(temp < 0){first.push_back(temp);}
        else if(temp == 0){second.push_back(temp);}
        else if(temp > 0){third.push_back(temp);}
    }
    if(third.size() == 0){
        temp = first.back();first.pop_back();third.push_back(temp);
        temp = first.back();first.pop_back();third.push_back(temp);
    }
    if(first.size() % 2 == 0){temp = first.back(); first.pop_back(); second.push_back(temp);}
    
    printf("%lu ", first.size()); for(int k = 0; k < first.size();  k++){printf("%d ", first[k]);};  printf("\n");
    printf("%lu ", third.size()); for(int k = 0; k < third.size();  k++){printf("%d ", third[k]);};  printf("\n");
    printf("%lu ", second.size());for(int k = 0; k < second.size(); k++){printf("%d ", second[k]);}; printf("\n");
    
    return 0;
}
