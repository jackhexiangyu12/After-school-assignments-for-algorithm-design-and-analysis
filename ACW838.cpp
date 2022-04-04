////
//// Created by hxy on 2022/4/1.
////
//#include "iostream"
//#include "algorithm"
//#define SIZE 100100
//
//using namespace std;
//const int N=1e6+10;
//int heap[SIZE],n,m;
//int h[N],cnt;
//
//int mySize;
//
////void up(int p){
////    while(p>1){
////        if(heap[p]>heap[p/2]){
////            swap(heap[p],heap[p/2]);
////            p/=2;
////        }else{
////            break;
////        }
////    }
////}
//
////int GetTop(){
////    return heap[1];
////}
////
////void down(int p){
////    int s=p*2;
////    while(s<=n){
////        if(s<n&&heap[s]<heap[s+1]){
////            s++;
////        }
////        if(heap[s]>heap[p]){
////            swap(heap[s],heap[p]);
////            p=s;
////            s=p*2;
////        }else{
////            break;
////        }
////    }
////}
//void down(int u)
//{
//    int t = u;
//    if (2 * u <= mySize && h[t] > h[2 * u])
//        t = 2 * u;
//    if (2 * u + 1 <= mySize && h[t] > h[2 * u + 1])
//        t = 2 * u + 1;
//    if (u != t)
//    {
//        swap(h[u], h[t]);
//        down(t);
//    }
//}
////
////void Extract(){
////    heap[1]=heap[n--];
////    down(1);
////}
////
////void Remove(int k){
////    heap[k]=heap[n--];
////    up(k);
////    down(k);
////}
//
//
//
//int main(){
//    cin>>n>>m;
//    mySize=n;
//    for(int i=1;i<=n;i++){
//        cin>>h[i];
//    }
//    cnt=n;
//    for(int i=n/2;i!=0;i--){
//        down(i);
//    }
//    while(m--){
//        cout<<h[1]<<" ";
//        h[1]=h[cnt--];
//        down(1);
//    }
//    cout<<endl;
//    return 0;
//}
