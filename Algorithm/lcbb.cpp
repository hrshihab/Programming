// least cost bb

#include<iostream>
#include<queue>
#include <time.h>
using namespace std;
const long long int maxn=1e4 ;
long long int n , c , cnt = 1 ,best_x[maxn] , best_v = 0, w[maxn], v[maxn];
long long int total=1;
struct node        //Node type in the queue
{
    int no , i , w , v;
    int x[maxn];    //The solution vector contained in the current node
    double ub;        //Upper Bound
    bool operator<(const node &s)const //Overload <relational function
    {
        return ub<s.ub;   //The bigger the ub, the more priority it will be
    }
};


void bound(node &e){ // upperbound for a branch node e
	int i = e.i +1;  // rem item in node e
	int sumw = e.w;
	double sumv = e.v;
	while((sumw + w[i] <= c ) and i <= n){
		sumw += w[i];
		sumv += v[i];
		i++;
	}
	if(i <= n ){
		e.ub = sumv + (c - sumw)*v[i]/ w[i];
	}
	else
	    e.ub = sumv;
}


void insert(node e , priority_queue<node>&pq){
	if(e.i == n){
		if(e.v > best_v){
			best_v = e.v;
			for(int j = 1 ; j <= n; j++){
				best_x[j] = e.x[j];
			}
		}
	}
	else
	   pq.push(e);
}

void BB(){
	node curr , left , right;
	priority_queue<node> pq;
	curr.i = 0;
	curr.v = 0;
	curr.w = 0;
	curr.no = cnt++;  // node create // this is the first node or root node
	for(int j = 1 ; j <= n ; j++){ // make all the ans is 0
		curr.x[j] = 0;
	}
	bound(curr); /// calculate the bound of current node or root node in this case
	pq.push(curr);

	while(!pq.empty()){

		curr = pq.top(); // take the node in current node
		pq.pop();
		if(curr.w + w[curr.i+1] <= c){ // check the left node is feasible then
			left.no = cnt; // new node
			left.i = curr.i+1;// 1
			left.w = curr.w + w[left.i];
			left.v = curr.v + v[left.i];
			for(int j = 1;  j <= n ; j++){
				left.x[j] = curr.x[j]; // take all possible x []
			}
			left.x[left.i] = 1; // take the left ele
			bound(left);
			insert(left , pq);
            cnt++;
		}

		right.no = cnt; // new node
		right.i = curr.i+1;
		right.w = curr.w; // take with out right.i index element
		right.v = curr.v;
		for(int j = 1;  j <= n ; j++){
			right.x[j] = curr.x[j]; // take all possible x []
		}
		right.x[right.i] = 0; // dont take the right ele
		bound(right);
		if(right.ub > best_v){ // is not bounded then kill the node that means dont take it
			insert(right , pq);
            cnt++;
		}
	}
}

int main(){

	n = 3;
	int ww[] = {2,5,10};
    int pp[] = {7,16,14};
	c  = 12;
    for(int i = 1; i <= n; i++)
    {
        w[i] = ww[i-1];
		v[i] = pp[i-1];
    }
    BB();
    cout<<"Least cost BB"<<endl;
    cout<<"\nThe optimal value is:"<<best_v<<endl;
    cout<<"(";
    for(int i=1;i<=n;i++)
        cout<<best_x[i]<<" ";
    cout<<")";
    cout<<endl;
    cout<<" Total  node created : "<<cnt-n <<endl;


	return 0;
}

