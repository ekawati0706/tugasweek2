#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int Array[8];
void quickSort(int array[], int left, int right);

int main(){

  int Array[8]={5,34,32,25,75,42,22,2};

  cout<<"Data sebelum diurutkan: \n";
  for (int b=0; b<8; b++){
  cout<<setw(3)<<Array[b];
  }

  cout<<endl<<endl;
  quickSort(Array,0,8);
  cout<<"Data yang telah diurutkan: "<<endl;
  for(int i=0; i<8;i++){
    cout<<setw(3)<<Array[i];
  }
  cout<<endl;

}

void quickSort(int array[], int left, int right){
  int i = left, j = right;
  int tmp;
  int pivot = array[(left + right) / 2];
  while (i <= j) {
    while (array[i] < pivot)
      i++;
      while (array[j] > pivot)
      j--;
        if (i <= j) {
          tmp = array[i];
          array[i] = array[j];
          array[j] = tmp;
          i++;
          j--;
        }
    };
  if (left < j){
    quickSort(array, left, j);
  }
  if (i < right){
    quickSort(array, i, right);
  }

}


