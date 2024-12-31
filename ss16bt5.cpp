#include<stdio.h>
void changeValue(int *array,int value,int index){
	array[index]=value;
}
void printfValue(int *array,int size){
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
}
int main(){
	int array[]={3,1,0,7,2,0,0,6};
	int size=sizeof(array)/sizeof(array[0]);
	int value=9999,index=3;
	changeValue(array,value,index);
	printfValue(array,size);
}
