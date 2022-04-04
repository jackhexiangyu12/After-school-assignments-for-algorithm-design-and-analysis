////
//// Created by hxy on 2022/4/4.
////
//
//#include "iostream"
//#include "vector"
//using namespace std;
//
//vector<vector<int>> h(4000000);
//
//int n,res,a, b, c,len;
//int main() {
//    for (a = 1; a <= 100; a++) {
//        for (b = a; b <= 100; b++) {
//            for (c = b; c <= 100; c++) {
//                res=a*a + b*b + c*c;
//                if(h[res].size()==0)
//                    h[res].push_back(true);
//                h[res].push_back(a);
//                h[res].push_back(b);
//                h[res].push_back(c);
//            }
//        }
//    }
//    while (scanf("%d", &n) != EOF) {
//        len=h[n].size();
//        if (len != 0) {
//            for(int i=1;i<len;i=i+3)
//                printf("%d %d %d\n", h[n][i], h[n][i+1], h[n][i+2]);
//        }
//        else{
//            printf("No Solution\n");
//        }
//    }
//    return 0;
//}