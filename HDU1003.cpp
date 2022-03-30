////
//// Created by 何翔宇 on 2022/3/26.
////
//
//#include "iostream"
//#include "cstring"
//
//using namespace std;
//
////int dp[100010], start[100010];
//
//int main() {
//    int final_index1;
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        int n;
//        cin >> n;
//        int a[n];
//        for (int j = 0; j < n; j++) {
//            cin >> a[j];
//        }
//        int index1 = 1, index2 = 1, x1 = 1;
//        int sum = 0;
//        int max = 0;
//        for (int j = 0; j < n; j++) {
//            if (sum < 0) {
//                sum = a[j];
////                start[j] = j + 1;
//                index1 = j + 1;
//
//            } else {
//                sum = sum + a[j];
//                if (j == 0)
////                    start[j] = j + 1;
//                    index1 = j + 1;
////                else
////                    start[j] = start[j - 1];
//            }
//            if (sum > max) {
//                max = sum;
////                start[j]=start[j-1];
////                x1=index1;
////                index1 = start[j];
//                final_index1 = index1;
//                index2 = j + 1;
//            }
//        }
////        int x2=index1>x1?index1:x1;
//        cout << "Case " << i + 1 << ":" << endl;
//        cout << max << " " << final_index1 << " " << index2 << endl;
//        cout << endl;
//    }
//}