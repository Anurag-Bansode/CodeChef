#include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;
int main()
{
	int  T=0,a[3],b[3],sum=0,sum1=0;
	cin>>T;
	int c[T];
	if( (T>=1) && (T<=1000))
	 {
	 	 while(T--)
		      {    
		          sum=0;sum1=0;
		
				for( int i =0;i<3;i++)
				{
					cin>>a[i];
				}
				for( int i =0;i<3;i++)
				{
					cin>>b[i];
				}
				
				sum = accumulate(a,a+3,sum);
			//	cout<<"S:"<<sum<<"\n";
				sum1 = accumulate(b,b+3,sum1);		
			
			
				if(sum>sum1)
				  {
					cout<<1<<"\n";	  	
				  }
				else
					cout<<2<<"\n";
		        	}
			
			
		/*for(int k=0;k<=T;k++)
		{
			cout<<c[k]<<"\n";
		}*/	
	 }
	 else 
	 	exit(0);
}
