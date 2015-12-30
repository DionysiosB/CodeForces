#include<bits/stdc++.h>

using namespace std;

int main(){
    char str[1000100];
    cin>>str;

    int n = strlen(str);
    int arr[1000100]={0};

    int j=0, pos_score=0, final_score = 0;

    for(int i=0;i<n;i++){
        switch(str[i]){
            // <>, {}, [], ()
            case '<' :
                arr[j] = 1;
                j++;
                pos_score++;
                break;
            case '>' :
                if(arr[j-1] == 1)
                    j--;
                else if(arr[j-1] > 0){
                    final_score++;
                    j--;
                } else {
                    arr[j] = -1;
                    j++;
                }
                pos_score--;
                break;
            case '{' :
                arr[j] = 2;
                j++;
                pos_score++;
                break;
            case '}' :
                if(arr[j-1] == 2)
                    j--;
                else if(arr[j-1] > 0){
                    final_score++;
                    j--;
                } else{
                    arr[j] = -2;
                    j++;
                }
                pos_score--;
                break;
            case '[' :
                arr[j] = 3;
                j++;
                pos_score++;
                break;
            case ']' :
                if(arr[j-1] == 3)
                    j--;
                else if(arr[j-1] > 0){
                    final_score++;
                    j--;
                } else{
                    arr[j] = -3;
                    j++;
                }
                pos_score--;
                break;
            case '(' :
                arr[j] = 4;
                j++;
                pos_score++;
                break;
            case ')' :
                if(arr[j-1] == 4)
                    j--;
                else if(arr[j-1] > 0){
                    final_score++;
                    j--;
                } else{
                    arr[j] = -4;
                    j++;
                }
                pos_score--;
                break;

        }
    }

    if(pos_score != 0 || j != 0)
        cout<<"Impossible\n";
    else {
        cout<<final_score<<endl;
    }
   