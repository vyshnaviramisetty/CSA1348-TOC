#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	char a[100];
	printf("enter string ");
	scanf("%s",a);
	n=strlen(a);
	int count=1;
	for(int i=0;i<n;i++){
		if(a[i]!='0' && a[i]!='1'){
			count=0;
		}
	}
	if(count!=1){
		printf("invalid string");
	}
	if(count==1){ 
		int flag=1;
		for (int i=0,j=n-1;i<n/2;i++,j--) {
        	if (a[i]!=a[j]) {
            	flag = 0;
            	break;  
        	}
    	}
   		if(flag==1){
    		printf("string is palindrome and accepted");
		}
		else{
			printf("string not palindrome and accepted");
		}
	}
}
