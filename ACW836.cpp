//#include "iostream"
//using namespace std;
//
//int p[100100];
//int main() {
//    long long int n, m;
//    char operation;
//    long long int a, b;
//    cin >> n >> m;
//    for(int i = 0; i <=n; i++) {
//        p[i] = i;
//    }
//    for (int i = 0; i < m; i++) {
//        cin >> operation >> a >> b;
//        if (operation == 'M') {
//            while(p[b] != b) {
//                b = p[b];
//            }
//            int temp_a= a;
//            a=p[a];
//            while(p[a] != a) {
//                temp_a=a;
//                a = p[a];
//                p[temp_a] = b;
//            }
//            p[a]=b;
//        }
//        if (operation == 'Q') {
//            while (p[a] != a) {
//                a = p[a];
//            }
//            while (p[b] != b) {
//                b = p[b];
//            }
//            if (a == b) {
//                cout << "Yes" << endl;
//            } else {
//                cout << "No" << endl;
//            }
//        }
//    }
//}