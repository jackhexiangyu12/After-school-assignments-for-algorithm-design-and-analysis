////
//// Created by hxy on 2022/4/4.
////
//
//#include "iostream"
//using namespace std;
//int count1=0;
//
//int relatively_prime(int a,int b){//a>b
////    int c=a%b;
//    return b==0? a:relatively_prime(b,a%b);
////    if(c==0)
////        if(b==1){
////            return true;
////        }
////        else
////            return false;
////        }
////    else
////        return relatively_prime(b,c);
//}
//
//int main(){
//    for(int i=0;i<=2020;i++){
//        for(int j=1;j<=2020;j++){
//            if(relatively_prime(i,j)==1){
//                count1++;
//            }
//        }
//    }
//    cout<<relatively_prime(11,5)<<endl;
//}