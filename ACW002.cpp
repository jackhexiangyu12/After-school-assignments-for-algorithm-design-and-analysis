//#include <iostream>
//using namespace std;
//int n,a;
//int v[2000],w[2000];
//int V[2000][2000];
//
//int DPKnapsack(){
//    for(int temp_w=0;temp_w<=w[1]-1;temp_w++){
//        V[1][temp_w]=0;
//    }
//    for(int temp_w=w[1];temp_w<=a;temp_w++){
//        V[1][temp_w]=v[1];
//    }
//    for(int i=2;i<=n;i++){
//        for(int temp_w=0;temp_w<=a;temp_w++){
//            if(w[i]>temp_w){
//                V[i][temp_w]=V[i-1][temp_w];
//            }
//            else if(V[i-1][temp_w]>V[i-1][temp_w-w[i]]+v[i]){
//                V[i][temp_w]=V[i-1][temp_w];
//            }
//            else{
//                V[i][temp_w]=V[i-1][temp_w-w[i]]+v[i];
//            }
//        }
//    }
//    return V[n][a];
//}
//
//
//
//
//int main() {
//
//    cin >> n >> a;
//    for(int i=1; i <= n; i++){
//        cin>>w[i]>>v[i];
//    }
//
//    cout<<DPKnapsack()<<endl;
//    return 0;
//}
