#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    
    while(scanf("%d%d",&a,&b)!=EOF){
    	if(a>b)
    	printf("%d\n",a-b);
	
 else
 printf("%d\n",b-a);
}
return 0;
}

