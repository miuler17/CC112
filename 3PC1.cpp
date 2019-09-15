#include<iostream>
using namespace std;

void pedir();


int main(){
		
	 pedir();


		return 0;
}

void pedir(){
			int l=0,num=1,m=0;
			int n[5]={1,1,1,1,1};	
			int M[5];
			
		for(int i=0;i<5;i++){	
				l=0;
				cout<<"\n ingresa un nro(10-100): ";cin>>num;
				
		for(int p=0;p<5;p++){
				if(num!=n[p]){
					l++;
				}
		}	
				n[i]=num;
		if(l>4){
			m++;
			M[m-1]=num;
			for(int g=0;g<m;g++){
				cout<<" "<<M[g]<<" ";
			}
		}
	}
		cout<<endl;
}
