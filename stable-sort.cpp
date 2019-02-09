#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

bool sort_custom(float a,float b)
{
    return(int(a)<int(b));
}

int main() {
    int c;
    float val;
    cout<<"Enter the number of elements"<<endl;
    cin>>c;
    vector <float> a;
    for (int i=0;i<c;i++)
    {
        cin>>val;
       a.push_back(val);
    }
 //   stable_sort(a.begin(),a.end());
    
    cout<<"Sorted output"<<endl;
     for (int i=0;i<c;i++)
    {
       cout<<a[i]<<endl;
    }
    
     
    stable_sort(a.begin(),a.end(),sort_custom);
    cout<<"Sorted int output"<<endl;
    
      cout<<"Sorted output"<<endl;
     for (int i=0;i<c;i++)
    {
       cout<<a[i]<<endl;
    }
    
}


