#include <stdio.h>
int main(){
int a,b,i,max,min;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
if(a>b){
max=a;
min=b;
}
else{
max=b;
min=a;
}
i = max;
while(i%min!=0)
i+=max;
printf("LCM of 2 numbers: %d", i);
return 0;
}
