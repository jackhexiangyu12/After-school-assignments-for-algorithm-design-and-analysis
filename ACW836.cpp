
#include "iostream"
#include "vector"

using namespace std;

//vector<vector<int>> q;

int p[100100];

int main() {
    int n, m;
    char operation;
    int a, b;
    for(int i = 0; i < 100100; i++) {
        p[i] = i;
    }
//    for(int i=0;i<m;i++){
//        q[i].push_back(i);
//    }
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> operation >> a >> b;
        if (operation == 'M') {
            p[a] = b;
        }
        if (operation == 'Q') {
            while (p[a] != a) {
                a = p[a];
            }
            while (p[b] != b) {
                b = p[b];
            }
            if (a == b) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}