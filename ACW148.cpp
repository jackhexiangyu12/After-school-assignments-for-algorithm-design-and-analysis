////
//// Created by hxy on 2022/4/1.
////
//
//#include "iostream"
//#include "queue"
//
//using namespace std;
//
//int main(){
//    priority_queue<int, vector<int>, greater<int>> p;
//    long long int temp,n,power=0;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>temp;
//        p.push(temp);
//    }
//    while(p.size()>=2){
//        int a=p.top();
//        p.pop();
//        int b=p.top();
//        p.pop();
//        p.push(a+b);
//        power=a+b+power;
//    }
//    cout<<power<<endl;
//}