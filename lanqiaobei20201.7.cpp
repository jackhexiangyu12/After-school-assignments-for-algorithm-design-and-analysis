//#include "iostream"
//#include "cstring"
//#include "vector"
//
//using namespace std;
//
////static char dp[100000][100000] = {0};
//
////vector<vector<int>> dp(100000, vector<int>(100000, 0));
//
//int my_main() {
//    int sum = 0;
//    char S[100100];
////    int count1=0;
//    cin >> S;
////    int count2=0;
//    for (int i = 0; i < strlen(S); i++) {
//        int dp[100010]={0};
//        bool flag[26] = {0};
//        for (int j = i; j < strlen(S); j++) {
//            if (flag[S[j] - 'a'] == 0) {
//                flag[S[j] - 'a'] = 1;
////                count2++;
//                dp[j] = dp[j - 1] + 1;
//            } else {
//                dp[j] = dp[j - 1];
//            }
//            sum += dp[j];
////            if(flag)
////            count1+=count2;
//        }
//    }
////    cout<<count1<<endl;cx
//    cout << sum << endl;
//}
//
//#define N 100002
//int main(){
//    long long int i,l,k,sum=0;
//    int last[26];
//    int pre[N];
//    char s[N];
//    cin>>s;
//    l= strlen(s);
//    for(i=0;i<26;i++){
//        last[i]=-1;
//    }
//    for(i=0;i<l;i++){
//        k=s[i]-'a';
//        pre[i]= last[k];
//        last[k]=i;
//    }
//    for(i=0;i<l;i++){
//        sum+=(l-i)*(i-pre[i]);
//    }
//    printf("%lld",sum);
//}

