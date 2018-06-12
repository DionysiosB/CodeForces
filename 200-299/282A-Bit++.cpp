#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int numOperations; scanf("%d\n",&numOperations);
    string temp = "";  int output = 0;
    while(--numOperations >= 0){
        getline(cin, temp);
        if(temp[1] == '+'){++output;}
        else{--output;}
    }
    printf("%d\n",output);
    return 0;
}
