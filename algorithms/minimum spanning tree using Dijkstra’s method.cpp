#include<iostream>
#include<fstream>

using namespace std;
int N;
int a,b,w;  //a connected with b with cost w
int am[100][100];  // adjacency matrix
int dis[100];  // distance
int visited[100];  //visited node
int totalw=0;
ifstream fin ("a.txt");  //text file input

int dij(int x)
{
    visited[x] = 1;
    //update
    for(int i =1;i<=N;i++)
    {
        if((visited[i] == 0) && (am[x][i] != -1))
        {
            if((dis[x] + am[x][i] < dis[i]) || (dis[i] == -1))
            {
                dis[i] = dis[x] + am[x][i];

            }
        }
    }
    //select new node


    int smaller = -1, sw = -1;
    for(int i = 1;i<= N;i++)
    {   if((visited[i] == 0) && (dis[i] >= 0) && ((sw > dis[i]) ||  (sw ==-1)))
        {
           sw = dis[i];
           smaller = i;
           printf("%d->",smaller);
        }
    }
    if(smaller != -1)
    {
        dij(smaller);
        return 0;
    }
   // return 0;
}
int main()
{
	fin>>N;  // input node number

	for(int i = 1; i<= N;i++ )
    {   for(int j=1;j<= N;j++)
    {
        am[i][j] = -1;
    }
    }
//initializing dis
    for(int i = 1; i<= N;i++ )
    {
        dis[i] = -1;
    }
 //initializing root
   dis[1] = 0;

   while(!fin.eof())
   {
   fin>>a>>b>>w;
   am[a][b] =w;
   am[b][a] = w;
   }
   dij(1);

for(int i =1;i<= N;i++)
{
    cout<<dis[i]<<"\n ";
     totalw=dis[i]+totalw;

}
printf("total weight %d\n",totalw);


	cout<<endl;

}

