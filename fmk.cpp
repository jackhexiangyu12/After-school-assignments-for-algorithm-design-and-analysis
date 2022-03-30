////
//// Created by hxy on 2022/3/27.
////
//
//#include<iostream>
//using namespace std;
//const int N = 1e2;
//int Board[N][N];
//int t= 0;
////tr、tc表示最左上角那个格子的坐标，dr、dc表示残缺的格子的坐标
//void TileBoard(int tr, int tc, int dr, int dc, int size)
//{
//    int s, title;
//    if (size== 1)
//        return;
//    t++;
//    title = t;
//    s = size / 2;
//    if (dr < tr + s&& dc < tc + s)
//    {
//        Board[tr + s - 1][tc + s] = title;
//        Board[tr + s][tc + s-1] = title;
//        Board[tr + s][tc + s] = title;
//        TileBoard(tr, tc, dr, dc,s);
//        TileBoard(tr, tc + s, tr + s - 1, tc + s,s);
//        TileBoard(tr + s, tc, tr + s, tc + s - 1, s);
//        TileBoard(tr + s, tc + s, tr + s, tc + s, s);
//    }
//    else if (dr < tr + s && dc >= tc + s)//残缺在右上角
//    {
//        Board[tr + s - 1][tc + s - 1] = title;
//        Board[tr + s][tc + s - 1] = title;
//        Board[tr + s][tc + s] = title;
//
//        TileBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//        TileBoard(tr, tc + s, dr, dc, s);
//        TileBoard(tr + s, tc, tr + s, tc + s - 1, s);
//        TileBoard(tr + s, tc + s, tr + s, tc + s, s);
//    }
//    else if (dr >= tr + s && dc < tc + s)//残缺在左下
//    {
//        Board[tr + s - 1][tc + s - 1] = title;
//        Board[tr + s - 1][tc + s] = title;
//        Board[tr + s][tc + s] = title;
//
//        TileBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//        TileBoard(tr, tc + s, tr + s - 1, tc + s, s);
//        TileBoard(tr + s, tc, dr, dc, s);
//        TileBoard(tr + s, tc + s, tr + s, tc + s, s);
//    }
//    else if(dr >= tr + s && dc >=tc + s)
//    {
//        Board[tr + s - 1][tc + s - 1] = title;
//        Board[tr + s - 1][tc + s] = title;
//        Board[tr + s][tc + s - 1] = title;
//
//        TileBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//        TileBoard(tr, tc + s, tr + s - 1, tc + s, s);
//        TileBoard(tr + s, tc, tr + s, tc + s - 1, s);
//        TileBoard(tr + s, tc + s, dr, dc, s);
//    }
//}
//int main()
//{
//    int k;
//    int x, y;
//    cin >> x >> y>>k;
//    int size = 1;
//    for (int i = 1; i <= k; i++)
//        size *= 2;
//    TileBoard(1, 1, x, y, size);
//    for (int i = 1; i <= size; i++)
//    {
//        for (int j = 1; j <= size; j++)
//        {
//            if (Board[i][j] < 10)
//                cout << Board[i][j] << ' ' << ' ';
//            else
//                cout << Board[i][j] << ' ';
//        }
//        cout << endl;
//    }
//    return 0;
//}