#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T temp;
	int count =1;
	for(int i=1; i < N ;i++){	
		if(d[i] > d[i-1]){
			for(int k = i-1 ;k>=0;k--){
				temp = d[k];
				d[k]=d[k+1];
				d[k+1]=temp;
				if(d[k]<d[k-1]) break;
			}
		}
		cout << "Pass " << count << ":";
		for(int j =0 ;j<N;j++){
		cout<< d[j] <<" ";
		}
		count++;
		cout<<"\n";
		}
		
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

