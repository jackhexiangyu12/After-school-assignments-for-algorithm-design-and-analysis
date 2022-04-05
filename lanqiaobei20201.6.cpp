//
// Created by hxy on 2022/4/5.
//

#include "iostream"
using namespace std;

int main(){
    int n;
    cin >> n;
    int count1,count2;
    int grade;
    for(int i=0;i<n;i++){
        cin >> grade;
        if(grade>=85)
            count1++;
        if(grade>=60)
            count2++;
    }
    printf("%d%%\n%d%%",count1*100/n,count2*100/n);
    return 0;
}