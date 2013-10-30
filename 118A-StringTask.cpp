#include <stdio.h>
#include <ctype.h>

bool isVowel(char c){
    c = tolower(c);
    if(c == 'e' || c =='a' || c =='i' || c == 'o' || c =='u' || c =='y'){return 1;}
    return 0;
}

int main(){
    char temp;
    while(scanf("%c",&temp) == 1){if(!isVowel(temp) && !isspace(temp)){printf(".%c",tolower(temp));}}
    printf("\n");
    return 0;
}
