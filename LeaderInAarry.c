//Given an array of positive integers. Your task is to find the leaders in the array.
//Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader. 

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int ar[n];
	    for(long long int i=0;i<n;i++)
	      cin>>ar[i];
	    long long int i;
	    long long int max;
	    max=ar[n-1];
	    long long int ak[n];
	    long long int k=0;
	    for(i=n-2;i>=0;i--)
	    {   
	        if(ar[i]>=max)
	          {
	            max=ar[i];
	            ak[k]=max;
	            k++;
	          }
      	}
      	for(long long int i=k-1;i>=0;i--)
          cout<<ak[i]<<" ";
	 cout<<ar[n-1]<<endl;;
	} 	
	return 0;
}
