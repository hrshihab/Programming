#include<bits/stdc++.h>
using namespace std;

void knapSack(int W, int n, int val[], int wt[]);
int getMax(int x, int y);

int main(void) {

  int val[] = {25, 20, 15, 40, 50};
  int wt[] = {3, 2, 1, 4, 5};

  int n = 5;
  int C = 6;

  knapSack(C, n, val, wt);

  return 0;
}

int getMax(int x, int y) {
  if(x > y) {
    return x;
  } else {
    return y;
  }
}

void knapSack(int C, int n, int val[], int wt[]) {
  int i, w;


  int V[n+1][C+1];


  for(w = 0; w <= C; w++) {
    V[0][w] = 0;
  }


  for(i = 0; i <= n; i++) {
    V[i][0] = 0;
  }


  for(i = 1; i <= n; i++) {
    for(w = 1; w <= C; w++) {
      if(wt[i-1] <= w) {
        V[i][w] = getMax(V[i-1][w], val[i-1] + V[i-1][w - wt[i-1]]);
      } else {
        V[i][w] = V[i-1][w];
      }
    }
  }


  cout<<"Max : "<< V[n][C];

  int res= V[n][C];
  int x[10]={0};
  int y=C;
  for(int i=n;i>0 && res>0;i--)
  {
        if(res == V[i-1][y])
        continue;
        else {
                x[i]=1;
                res = res - val[i-1];
                y=y-wt[i-1];

          }
  }
  cout<<endl;
  for(int i=1;i<=n;i++)
  {if(x[i]==1)
  {
        cout<<"item : "<<i<<" "<<"profit: "<<val[i-1]<<endl;
  }
  }

}
