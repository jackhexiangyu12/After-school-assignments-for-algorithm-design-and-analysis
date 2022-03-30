////
//// Created by hxy on 2022/3/28.
////
//
//#include "iostream"
//#include "vector"
//#include "algorithm"
//
//using namespace std;
//
//int s[100100], f[100100];
//vector<int> A;
//vector<vector<int>> intervals;
//int i, n, count1 = 0;
//
//void GreedyTaskSelect() {
////    A[0]=a[1];
//    count1++;
//    i = 1;
//    for (int m = 2; m <= n; m++) {
//        if (s[m] >= f[i]) {
////            A.push_back(m);
//            count1++;
//            i = m;
//        }
//    }
//}
//
//int eraseOverlapIntervals(vector<vector<int>> &intervals) {
//    n = intervals.size();
//    sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) {
//        return a[1] < b[1];
//    });
//
//    for (int i = 0; i < intervals.size(); i++) {
//        s[i + 1] = intervals[i][0];
//        f[i + 1] = intervals[i][1];
//    }
//    GreedyTaskSelect();
//    return n - count1;
//}
//
//int main() {
//    vector<int> temp_vec;
//    int N, temp;
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> temp;
//        temp_vec.push_back(temp);
//        cin >> temp;
//        temp_vec.push_back(temp);
//        intervals.push_back(temp_vec);
//        temp_vec.clear();
//    }
//    cout << eraseOverlapIntervals(intervals);
//
//}