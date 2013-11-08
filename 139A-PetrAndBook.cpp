#include <cstdio>

int main(){
    const int numDays = 7;
    int numPages; scanf("%d\n", &numPages);
    int weekPages[numDays] = {0}; int total = 0;
    for(int k = 0; k < numDays; k++){scanf("%d", weekPages + k); total += weekPages[k];}
    numPages %= total;
    if(numPages == 0){numPages = total;}
    for(int k = 0; k <= numDays; k++){
        if(numPages <= 0){printf("%d\n",k); break;}
        numPages -= weekPages[k];
    }
    return 0;
}
