//#include "iostream"
//#include "cstring"
//using namespace std;
//
//int W[105];
//int dp[105][100010];
//
//int main(){
//    memset(dp,0,sizeof(dp));
//    memset(W,0,sizeof(W));
//    int N;
//    cin >> N;
//    for(int i = 0; i < N; i++){
//        cin >> W[i];
//    }
//    for(int i = 0; i < N; i++){
//        if(i!=0){
//            for(int j=0;j<100010;j++){
//                dp[i][j] = dp[i-1][j];
//            }
//        }
//        dp[i][W[i]] = 1;
//        if(i!=0){
//            for(int j = 0; j < 100010; j++){
//                if(dp[i-1][j] == 1){
//                    dp[i][j+W[i]] = 1;
//                    dp[i][abs(j-W[i])] = 1;
//                }
//            }
//        }
//    }
//    int ans = 0;
//    for(int i = 1; i < 100010; i++){ //注意第0个，也就是两边砝码一样重，不算
//        if(dp[N-1][i] == 1){
//            ans += 1;
//        }
//    }
//    cout << ans << endl;
//}