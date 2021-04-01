#include<iostream>
#include<queue>

using namespace std;


priority_queue< pair<int, int>,vector<pair<int, int> >,greater<pair<int,int> > > edges;
int n,m;

vector < pair < int,int> > sample;
vector<vector < pair < int,int> > > ad(100,sample);
int vis[1001];
int mst_w = 0;

int main()
{
	cout<<"Node & Edges"<<endl;
	cin>>n>>m;
	int z = m;

	int a, b, w;
	while(z--){
		//int x,y,c;
		cin>>a>>b>>w;
		ad[a].push_back(make_pair(w,b));
		ad[b].push_back(make_pair(w,a));
	}

	int cnode = 1, visn = 0;  //cnode = root node/starting node
	while(visn < n-1)
    {
        vis[cnode] = 1;
        visn++;

        for(int i =0; i<ad[cnode].size();i++)
        {
            edges.push( ad[cnode][i]);   // push in the priority queue ,weight jaiteca

        }
        while(vis[edges.top().second == 1])//to check whether is a new edge or not
        {
            edges.pop();

        }

        mst_w = mst_w + edges.top().first;
        cnode =edges.top().second;
        edges.pop();
    }
    cout<<"The weight is: "<<mst_w<<endl;



	return 0;

}
