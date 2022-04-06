//
// Created by hxy on 2022/4/5.
//

#include "iostream"
#include "cstring"
using namespace std;

int main(){
    char S[100100];
    int count1=0;
    cin>>S;
    bool flag[26]={0};
    int count2=0;
    int dp[100100][100100]={0};
    for(int i=0;i<strlen(S);i++){
        for(int j=i;j<strlen(S);j++){
            if(flag[S[j]-'a']==0){
                flag[S[j]-'a']=1;
                count2++;
                dp[i][j]=dp[i][j-1]+1;
            }
            else{
                dp[i][j]=dp[i][j-1];
            }
            if(flag)yc
            count1+=count2;
        }
    }
    cout<<count1<<endl;
}