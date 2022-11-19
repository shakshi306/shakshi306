#include <iostream>
using namespace std;
int main()
{

	int arr[3]={1,2,3};
    //int arr[]={1,2,3,4,5,6,7,8};
//	int index=0;
   // int arr[11]={1};
	int size= sizeof(arr)/sizeof(int);
	 
//	while(index<3)
   // while(index<size)
//	{
		//arr[index]=index+2;
		//index++;
//	}
	int printindex=0;
	//while(printindex<3)
	while (printindex<size)
	{                                                      
	
	
	cout <<arr[printindex]<<endl;
	printindex++;
    }
cout<<arr[4];//is nl garbage value aayi ha zero kyuki size hi ni h hmara yh array ka                                       
    
}
