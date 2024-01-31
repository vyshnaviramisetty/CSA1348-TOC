#include<stdio.h>
#include<string.h>
int main(){
    int n,c=0,i;
    char a[10];
    printf("enter string: ");
    scanf("%s",a);
    n=strlen(a);
    if(a[0]=='a' && a[n-1]=='a'){
        printf("accepted");
    }
    else{
        printf("rejected");
    }
}
