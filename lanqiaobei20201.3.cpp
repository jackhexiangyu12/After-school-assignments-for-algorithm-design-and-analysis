////
//// Created by hxy on 2022/4/4.
////
//
//#include "iostream"
//using namespace std;
//int a[1000][1000];
//int i=1,j=1;
//int flag=1;
//
//int main(){
//
//    for(int k=1;k<=1000;k++){
//        a[i][j]=k;
//        if(i==1){
//            j++;
//            k++;
//            a[i][j]=k;
//            flag=1;
//            j=j-flag;
//            i=i+flag;
//            continue;
//        }
//        if(j==1){
//            i++;
//            k++;
//            a[i][j]=k;
//            flag=-1;
//            j=j-flag;
//            i=i+flag;
//            continue;
//        }
//        j=j-flag;
//        i=i+flag;
//    }
//    cout<<a[20][20];
//}