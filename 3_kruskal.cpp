#include<bits/stdc++.h>

using namespace std;

class edges{

public:

int s;

int d;

int w;

};

bool bb(edges a,edges b){

return a.w<b.w;

}

int fparent(int * parent,int a){

//int i=a;

while(parent[a]!=a)

{

parent[a]=parent[parent[a]];

a=parent[a];

}

return a;

}

int main(){

int n;cout<<"no of vertices"<<endl;int sum=0;

cin>>n;

cout<<"no of edges"<<endl;

int m;

cin>>m;

edges* a=new edges[m];

edges* ans=new edges[n-1];

for(int i=0;i<m;i++){

// a[i]=new edge;

cin>>a[i].s>>a[i].d>>a[i].w;

}

sort(a,a+m,bb);

// for(int i=0;i<m;i++)

// cout<<a[i].w<<" "<<a[i].d<<" ||";

int* parent=new int[n];

for(int i=0;i<n;i++)

parent[i]=i;

int count=0,i=0;

while(count<n-1 && i<m){

int p1=fparent(parent,a[i].s);

int p2=fparent(parent,a[i].d);

if(p1!=p2)

{ parent[p1]=p2;

ans[count].s=a[i].s;

ans[count].d=a[i].d;
sum=sum+a[i].w;

ans[count].w=a[i].w;

cout<<ans[count].s<<"->"<<ans[count].d<<" ";count++;

}

i++;

}

cout<<"\n"<<sum;

}