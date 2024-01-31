#include<stdio.h>
#include<string.h>
int main(){
    int n,c=0,i;
    char a[10];
    printf("enter string: ");
    scanf("%s",a);
    n=strlen(a);
    for (int i = 0; a[i] != '\0'; i++){
        if(i==0 && a[i]=='0' || i==(n-1) &&a[i]=='1'){
            c++;
        }
    }
    if(c==2){
        printf("ss");
    }
    else{
        printf("noo");
    }
}
