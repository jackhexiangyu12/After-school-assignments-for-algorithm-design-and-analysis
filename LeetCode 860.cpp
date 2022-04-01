////
//// Created by hxy on 2022/3/30.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool lemonadeChange(vector<int> &bills) {
//    vector<int> changes;
//    for (int i = 0; i < bills.size(); i++) {
//        if (bills[i] == 5) {
//            changes.push_back(5);
//        }
//        else if (bills[i] == 10) {
//            vector<int>::iterator it = find(changes.begin(), changes.end(), 5);
//            if (it != changes.end()) {
//                changes.erase(it);
//                changes.push_back(10);
//            } else {
//                return false;
//            }
//        }
//        else if(bills[i] == 20) {
//            vector<int>::iterator it51 = find(changes.begin(), changes.end(), 5);
//            if (it51 != changes.end()) {
//                changes.erase(it51);
//                vector<int>::iterator it10 = find(changes.begin(), changes.end(), 10);
//                if (it10 != changes.end()) {
//                    changes.erase(it10);
//                    changes.push_back(20);
//                } else {
//                    vector<int>::iterator it52 = find(changes.begin(), changes.end(), 5);
//                    if (it52 != changes.end()) {
//                        changes.erase(it52);
//                        vector<int>::iterator it53 = find(changes.begin(), changes.end(), 5);
//                        if (it53 != changes.end()) {
//                            changes.erase(it53);
//                            changes.push_back(20);
//                        } else {
//                            return false;
//                        }
//                    } else {
//                        return false;
//                    }
//                }
//            } else {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> bills;
//    for (int i = 0; i < n; i++) {
//        int bill;
//        cin >> bill;
//        bills.push_back(bill);
//    }
//    if (lemonadeChange(bills)==true) {
//        cout << "YES" << endl;
//    } else {
//        cout << "NO" << endl;
//    }
//}