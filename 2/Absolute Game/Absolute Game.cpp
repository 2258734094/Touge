#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,num,min,max;
	cin>>n;
	int a[n],b[n];
	
	//输入数据 
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	
	//测试数据输入是否成功
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<a[i]<<endl; 
//	}
//	cout<<endl;
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<b[i]<<endl; 
//	}
//	cout<<endl;
	
	//剔除数据
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				for(k=i;k<n-1;k++){
					a[k]=a[k+1];
				}
				for(k=j;k<n-1;k++){
					b[k]=b[k+1];
				}
				a[n-1]=b[n-1]=-1;
				n--;
				i=j=0;
				break;
			} 
		}
	}
	
	//查看处理后的数据 
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<a[i]<<endl; 
//	}
//	cout<<endl;
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<b[i]<<endl; 
//	}
//	cout<<endl;
	
	
	
	 
	for(i=0;i<n;i++){
		//查找a[i]与b[]的最小值 
		for(j=0;j<n;j++){
			if(a[i]>b[j]){
				num=a[i]-b[j];	
			}else{
				num=b[j]-a[i];
			}
			
			if(j==0){
				min=num;
			}else{
				if(num<min) min=num;
			}
		}
		//查找最小值中的最大值 
		if(i==0){
			max=min;
		}else{
			if(min>max) max=min;
		}
	}
	
	//输出结果 
	cout<<max;
	return 0;
}
