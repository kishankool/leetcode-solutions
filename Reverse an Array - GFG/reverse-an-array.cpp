#include <iostream>
using namespace std;
void reverse(int arr[],int lo,int hi)
{
    if(lo>=hi) return;
    swap(arr[lo],arr[hi]);
    return reverse(arr,lo+1,hi-1);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    reverse(arr,0,N-1);
	    for(auto i:arr)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}