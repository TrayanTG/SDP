#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

void alg(int n)
{
    int t;
    queue<int> q;
    for(int i=1;i<=n;i++)q.push(i);
    cout<<"Discarded cards:";
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        if(q.empty())
        {
            cout<<"\nRemaining card: "<<t<<endl;
            return;
        }
        cout<<' '<<t;
        t=q.front();
        q.pop();
        q.push(t);
    }
}

int main()
{
    int t=0;
    do
    {
        cin>>t;
        if(t)alg(t);
    }while(t);

    return 0;
}
