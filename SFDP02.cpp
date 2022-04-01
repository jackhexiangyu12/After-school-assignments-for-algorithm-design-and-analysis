////
//// Created by hxy on 2022/4/1.
////
//#define INT_MAX 2147483647
//#include "iostream"
//using namespace std;
//
//int n;
//int m[10000][10000];
//int p[10000];
//int DPMatrixChain(){
//    for(int i=1;i<=n;i++){
//        m[i][i]=0;
//    }
//    for(int c=2;c<=n;c++){
//        for(int i=1;i<=n-c+1;i++){
//            int j=i+c-1;
//            m[i][j]=INT_MAX;
//            for(int k=i;k<=j-1;k++){
//                int q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
//                if(q<m[i][j]){
//                    m[i][j]=q;
//                }
//            }
//        }
//    }
//    return m[1][n];
//}
//
//int main(){
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        cin>>p[i-1];cin>>p[i];
//    }
//    cout<<DPMatrixChain();
//    return 0;
//}