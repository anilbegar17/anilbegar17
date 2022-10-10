#include<stdio.h>
#include<conio.h>
int main(){
int arrMain[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int evenCount=0;

//scanf("%i",&h);

int arrSize = sizeof(arrMain)/2;

for(int i=0 ; i<arrSize; i++){
	
if(arrMain[i]%2==0){

   evenCount++;
}//end of if

}//end of for loop

int arrEven[evenCount+1];


for(int l=0 ; l<=arrSize ; l++){
	
if(arrMain[l]%2==0){
   arrEven[evenCount] = arrMain[l];    
}//end of if

}//end of for loop

   

int arrEvnSize = evenCount+1;

for(int m=0 ; m<arrEvnSize ; m++){
   printf("%i\n",arrEven[m]);
}

//getch();

return 0;
}
