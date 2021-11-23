 #include<iostream>
 using namespace std;
 int main()
 {
 	int arr[6]={8,1,3,4,5};
 	int k ,i;
 	while(k!=0)
 	{
 		
 		for( i=0;i<6;i++)
 		{
 			if(arr[i]==NULL)
 			{
 				k=1;
 				break;
			}
			else
			{
				k=0;
			}
		}
	
		if(k==1)
		{
			arr[i]=7;
		}
		else
		{
			cout<<"No Place to Fill In Array"<<endl;
		}
	}
		for( i=0;i<6;i++)
 		{	
 		 cout<<arr[i]<<" ";
	}
	
 }
