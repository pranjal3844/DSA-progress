#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target, int i,int j)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
         if(arr[i][j]==target)
         return 1;
    }
    return 0;
}
void largestsum(int arr[][4],int i,int j)
{
    int maxi=INT_MIN;
    int rowindex = -1;
    for(int i=0;i<3;i++)
    {
        int ans =0;
        for(int j=0;j<4;j++)
        {
            ans= ans + arr[i][j];
            
        }
        if(ans>maxi)
        {
            maxi=ans;
            rowindex = i;
        }
        
       
    }
    cout<<"the maximum sum is"<<maxi<<endl;
    cout<<rowindex<<endl;
}
void sumofarr(int arr[][4],int i,int j)
{
     for(int i=0;i<3;i++)
    {
        int ans =0;
        for(int j=0;j<4;j++)
        {
            ans= ans + arr[i][j];
            
        }
        cout<<ans<<" "<<endl;
       
    }
         
         
}
int main()
{
    int arr[3][4];
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    // row wise input; 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    /*// col wise input;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }*/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    /*cout<<"name your target"<<endl;
    int target;
    cin>>target;
     if(ispresent(arr,target,3,4))
     cout<<"found"<<endl;
     else
     cout<<"not found"<<endl;*/
     sumofarr(arr ,3,4);
     largestsum(arr,3,4);
     return 0;

   
}
