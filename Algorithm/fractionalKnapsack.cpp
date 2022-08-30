#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct Sdat {
  char id[5];
  int wt;
  int val;
  float valuwt;
};

void fractionalKnapsack(Sdat items[], int n, int cap);

int main() {
  //variables
  int i, j;

  //list items
 Sdat  items[6] = {
    {"i1",  6, 6, 0},
    {"i2", 10, 2, 0},
    {"i3",  3, 1, 0},
    {"i4",  5, 8, 0},
    {"i5",  1, 3, 0},
    {"i6",  3, 5, 0}
  };

  //temp item
  Sdat temp;

  //number of items
  int n = 6;

  //max weight limit of knapsack
  int cap = 16;

  //compute value per unit weight = (value/weight)
  for(i = 0; i < n; i++) {
    items[i].valuwt = float(items[i].val) / items[i].wt;
  }

  //sort by value per unit weight in descending order
  for(i = 1; i < n; i++) {
    for(j = 0; j < n - i; j++) {
      if(items[j+1].valuwt > items[j].valuwt) {
        temp = items[j+1];
        items[j+1] = items[j];
        items[j] = temp;
      }
    }
  }

  fractionalKnapsack(items, n, cap);

  return 0;
}

void fractionalKnapsack(Sdat items[], int n, int cap) {
  int i, wt;
  float value;

  float totalWeight = 0, totalBenefit = 0;

  for(i = 0; i < n; i++) {
    if(items[i].wt + totalWeight <= cap) {

      totalWeight += items[i].wt;
      totalBenefit += items[i].val;
    cout<<fixed<<setprecision(2)<<"Selected Item :"<<items[i].id<<endl<<"Weight : "<<items[i].wt<<"\tValUW : "<<items[i].wt<<"\tTotal Weight: "<<totalWeight<<"\tTotal Benefit : "<<totalBenefit<<endl<<endl;

      //printf("Selected Item: %s\tWeight: %d\tValue: %d\tTotal Weight: %f\tTotal Benefit: %f\n", items[i].id, items[i].wt, items[i].val, totalWeight, totalBenefit);

    } else {
      wt = (cap - totalWeight);
      value = wt * (float(items[i].val) / items[i].wt);

      totalWeight += wt;
      totalBenefit += value;

     // printf("Selected Item: %s\tWeight: %d\tValue: %f\tTotal Weight: %f\tTotal Benefit: %f\n", items[i].id, wt, value, totalWeight, totalBenefit);
    cout<<fixed<<setprecision(2)<<"Selected Item :"<<items[i].id<<endl<<"Weight : "<<wt<<"\tValUW : "<<value<<"\tTotal Weight: "<<totalWeight<<"\tTotal Benefit : "<<totalBenefit<<endl<<endl;
      break;
    }
  }


  cout<<"Total Weight:"<<totalWeight<<endl<<"Total Benefit:"<<totalBenefit;
}

