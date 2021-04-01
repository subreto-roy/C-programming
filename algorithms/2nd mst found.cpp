#include <iostream>
#include <cstring>
using namespace std;

#define INF 9999999
#define V 4


int mst=0;

int Sum_mst(int G[V][V],int x,int y)
{
    mst= mst+G[x][y];
    return mst;


}


void sb_mst(int x, int y){
    int A[V][V] = {
  {0, 1, 100, 0},
  {1, 0, 3, 2},
  {100, 3, 0, 3},
  {0, 2, 3, 0},

};
    A[x][y]=0;
  int edge_num;
  int visit[V];
  int mst = 0, w, z;
  memset (visit, false, sizeof (visit));
  edge_num = 0;
  visit[0] = true;

  cout << "Second_Edge" << " : " << "Second_Weight";
  cout << endl;

  while(edge_num< V - 1){

      int min = INF;
      w = 0;
      z = 0;

      for (int i = 0; i < V; i++) {
        if (visit[i]) {
            for (int j = 0; j < V; j++) {
              if (!visit[j] && A[i][j]) {
                  if (min > A[i][j]) {
                      min = A[i][j];
                      w = i;
                      z = j;
                  }
              }
          }
        }
      }
      cout << w <<  " - " << z << " :  " << A[w][z];
      cout << endl;
      visit[z] = true;
      edge_num++;

      mst=mst+A[w][z];
        }
        cout << "Second Minimum Spanning Tree: " << mst;
        cout << endl;
}

int main () {
    int G[V][V] = {
  {0, 1, 100, 0},
  {1, 0, 3, 2},
  {100, 3, 0, 3},
  {0, 2, 3, 0},
};

  int edge_number;
  int visited[V];
  int mst = 0;
  int x, y;
  memset (visited, false, sizeof (visited));
  edge_number = 0;
  visited[0] = true;

  cout << "Edge" << " : " << "Weight";
  cout << endl;

  while(edge_number < V - 1){

      int min = INF;
      x = 0;
      y = 0;

      for (int i = 0; i < V; i++) {
        if (visited[i]) {
            for (int j = 0; j < V; j++) {
              if (!visited[j] && G[i][j]) {
                  if (min > G[i][j]) {
                      min = G[i][j];
                      x = i;
                      y = j;
                  }
              }
          }
        }
      }
      cout << x <<  " - " << y << " :  " << G[x][y];
      cout << endl;


      mst=Sum_mst(G, x, y);
      sb_mst(x, y);

      visited[y] = true;
      edge_number++;
    }
      cout << "Minimum Spanning Tree: " << mst;
      cout << endl;

  return 0;
}
