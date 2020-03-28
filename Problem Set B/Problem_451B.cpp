#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int s=0;int e=0;int k1=0;int k2=0;
    for(int i=0;i<n-1;i++){
        if(v[i] > v[i+1])
        {
            e = v[i];
            k1 = i;
            while(v[i] > v[i+1] && i<n-1)
            {
            	//cout<<v[i]<<" "<<v[i+1]<<"/";
                i++;
            }
            s = v[i];
            k2 = i;
            //cout<<s<<" "<<e<<" "<<k2;
            break;
        }
    } 
    if(k1==0 && k2==0)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1;
    }
    else if(k1==0 && k2<n-1)
    {
        int k3 = *min_element(v.begin()+k2+1,v.end());
        if(k3>e && k3==v[k2+1])
        {
            cout<<"yes"<<endl;
            cout<<k1+1<<" "<<k2+1;
        }
        else{
            cout<<"no";
        }
    }
    else if(k2==n-1 && k1!=0)
    {
        int k3 = *max_element(v.begin(),v.begin() + k1);
        if(k3<s)
        {
            cout<<"yes"<<endl;
            cout<<k1+1<<" "<<k2+1;
        }
        else{
            cout<<"no";
        }
    }
    else if(k1==0 && k2==n-1)
    {
        cout<<"yes"<<endl;
        cout<<k1+1<<" "<<k2+1;
    }
    else{
        int k3 = *max_element(v.begin(),v.begin()+k1);
        int k4 = *min_element(v.begin()+k2+1,v.end());
        if(k3<s && k4>e && k4==v[k2+1])
        {
            cout<<"yes"<<endl;
            cout<<k1+1<<" "<<k2+1;
        }
        else{
            cout<<"no";
        }
    } 
    return 0;
}
