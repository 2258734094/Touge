#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,num,min,max;
	cin>>n;
	int a[n],b[n];
	
	//�������� 
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	
	//�������������Ƿ�ɹ�
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<a[i]<<endl; 
//	}
//	cout<<endl;
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<b[i]<<endl; 
//	}
//	cout<<endl;
	
	//�޳�����
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
	
	//�鿴���������� 
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<a[i]<<endl; 
//	}
//	cout<<endl;
//	for(i=0;i<n;i++){
//		cout<<i<<": "<<b[i]<<endl; 
//	}
//	cout<<endl;
	
	
	
	 
	for(i=0;i<n;i++){
		//����a[i]��b[]����Сֵ 
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
		//������Сֵ�е����ֵ 
		if(i==0){
			max=min;
		}else{
			if(min>max) max=min;
		}
	}
	
	//������ 
	cout<<max;
	return 0;
}
