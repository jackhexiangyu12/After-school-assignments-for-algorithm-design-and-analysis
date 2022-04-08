////
//// Created by hxy on 2022/4/8.
////
//
//#include "iostream"
//#include "map"
//#define X_MAX 20
//#define Y_MAX 21
//using namespace std;
//
//map<pair<double, double>, int> mp;
//
//int main(){
//    int ans=20+21;
//    for(double x1=0; x1 < X_MAX; x1++){
//        for(double y1=0; y1 < Y_MAX; y1++){
//            for(double x2=0; x2 < X_MAX; x2++){
//                for(double y2=0; y2 < Y_MAX; y2++){
//                    if(x1 == x2 || y1 == y2) continue;
////                    double x = x1 - x2;
////                    double y = y1 - y2;
//                       double k= (y1-y2)/(x1-x2);
////                    double k = y / x;
////                    double b = y1 - k * x1;
//                      double b=(x2*y1-x1*y2)/(x2-x1);
////                      应该单步算完，分步算精度损失很多
//                     if(mp.find(make_pair(k, b)) == mp.end())
////                    if(mp[{k,b}]==0)
//                    {
//                        mp[{k , b}] = 1;
//                        ans++;
//                    }
//                }
//            }
//        }
//    }
//    cout << ans << endl;
//}


