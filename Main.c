#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int limit,i,value[100],sk,flag=0;
	printf("Enter array limit:\n");
    scanf("%d",&limit);

    printf("Enter Values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&value[i]);
    }
    printf("Enter the search value:");
    scanf("%d",&sk);

    for ( i=0;i<limit;i++){
        if(sk==value[i]){
        flag=1;
        break;
        }
    }
    if (flag==1){
        printf("value found at position: %d",i+1);
    }else{
        printf("Value not found");
    }
        return EXIT_SUCCESS;
}
