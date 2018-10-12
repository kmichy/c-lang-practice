#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    memset(a,'\0',sizeof(a));
    int people = 0;
    
    char str[1024];
    fgets(str,1024, stdin);
    // printf("%s",str);
    char *ptr;

    int *p;
    p = a;
    ptr = strtok(str," ,");
    *p = atoi(ptr);
    printf("%d\n",*p);

    while(ptr != NULL){
        ptr = strtok(NULL, ", \n");

        if(ptr != NULL ){
            *p = atoi(ptr);
            printf("%d\n",*p);
        }
    }

    for(i = 0;i<n;i++){
        people += a[i];
    }
    if(people % n != 0){
        printf("-1\n");
    }else{
        int sum = people / n;
    }
}