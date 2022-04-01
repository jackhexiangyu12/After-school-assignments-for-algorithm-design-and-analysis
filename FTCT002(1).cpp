////
//// Created by hxy on 2022/4/1.
////
//
//#include "iostream"
//#define INT_MAX 2147483647
//using namespace std;
//int n, k;
//int sum = 0;
//int start = 1;
//int finish=0;
//int Gold[10010];
//
//int main() {
//    sum = 0;
//    cin >> n;
//    Gold[0]=2147483647;
//    for (int i = 1; i <= n; i++) {
//        cin >> Gold[i ];
//    }
//    for (int i = 2; i <=n; i++) {
//        if (Gold[i] < Gold[i - 1]) {
//            start = i;
//        }
//        if (Gold[i] > Gold[i - 1]) {
//            if (Gold[i] >= Gold[i + 1]) {
//                sum += Gold[i] - Gold[start];
////                if(Gold[start]>Gold[finish]){
////                    sum += Gold[start] - Gold[finish];
////                }
////                finish=i;
//            }
////                if(Gold[i]<Gold[i+1]){
////                    sum+=Gold[i]-Gold[start];
////                    start=i+1;
////                }
//        }
//    }
//    cout << sum << endl;
//
//    return 0;
//}