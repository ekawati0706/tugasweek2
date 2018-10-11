#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void SelectionSort(int Array[],const int Size){
	int i,j,smallest,temp;
	for(i=0;i<Size;i++){
		smallest=i;
		for(j=i;j<Size;j++){
			if(Array[smallest]>Array[j]){
				smallest=j;
		    }
		}
	temp=Array[i];
	Array[i]=Array[smallest];
	Array[smallest]=temp;
    }
}

int main(){
	
	 int NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
	 int temp;
	 cout<<"data sebelum diurutkan: \n";
	 for (int a=0;a<8;a++){
		cout<<setw(3)<<NumList[a];
     }
    
	 cout<<"\n\n";
	 SelectionSort(NumList,8);
	
	 cout<<"data setelah diurutkan: \n";
	 for (int iii=0;iii=8;iii++){
		     cout<<setw(3)<<NumList[iii];
    }
	getche();
}




