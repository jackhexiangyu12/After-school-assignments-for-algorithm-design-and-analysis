////
//// Created by hxy on 2022/4/7.
////
//
//#include "iostream"
//using namespace std;
//
//int main(){
//    int count1[10]={0};
//    int flag=1;
//    int num=1;
//    while(flag==1){
//        int a=num%10;
//        int b=num/10%10;
//        int c=num/100%10;
//        int d=num/1000%10;
//        int e=num/10000%10;
//        count1[a]++;
//        count1[b]++;
//        count1[c]++;
//        count1[d]++;
//        count1[e]++;
//        if(e==0){
//            count1[e]--;
//            if(d==0){
//                count1[d]--;
//                if(c==0){
//                    count1[c]--;
//                    if(b==0){
//                        count1[b]--;
//                        if(a==0){
//                            count1[a]--;
//                        }
//                    }
//                }
//            }
//        }
//        for(int i=0;i<=9;i++){
//            if(count1[i]>2021){
//                flag=0;
//            }
//        }
//        num=num+1;
//    }
//    cout<<num-2<<endl;
//}