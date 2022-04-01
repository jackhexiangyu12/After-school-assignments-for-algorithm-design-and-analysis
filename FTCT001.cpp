////
//// Created by hxy on 2022/4/1.
////
//
//#include "iostream"
//using namespace std;
//
//int n,k,count1=0;
//int baifang[200100];
//
//int dfs(int u){
//    if(u==n) {
//        count1++;
//        return 1;
//    }
//    if((baifang[u]==baifang[u-1])&&(baifang[u-1]==baifang[u-2])){
//        return 0;
//    }
//    for(int i=1;i<=k;i++){
//        baifang[u] = i;
//        dfs(u+1);
//    }
//}
//
//int main(){
//    baifang[0]=-1;
//    cin>>n>>k;
//    dfs(0);
//    cout<<count1;
//}