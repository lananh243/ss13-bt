#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int length;
	char str[100];
	int count;
	do{
		printf("1.Nhap vao chuoi ki tu\n");
		printf("2.In ra do dai va noi dung chuoi vua nhap\n");
		printf("3.In ra chuoi dao nguoc\n");
		printf("4.In ra so luong chu cai trong chuoi\n");
		printf("5.In ra so luong chu so trong chuoi\n");
		printf("6.In ra so luong ki tu dac biet trong chuoi\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				fflush(stdin);
				printf("Nhap vao mot chuoi ki tu:"); 
				gets(str);
				break;
			case 2:
				length = strlen(str);
				printf("Chuoi vua nhap la:%s\n",str);
				printf("Do dai cua chuoi la:%d\n",length);
				break;
			case 3:
				strrev(str);
				printf("Chuoi theo chieu dao nguoc:%s\n",str);
				break;
			case 4:
				count = 0;
				for(int i=0;i<strlen(str);i++){
					if('a'<str[i] && 'z'>str[i]){
						count++;
					}
					
				}
				printf("So luong chu cai trong chuoi:%d\n",count);
				break;
			case 5:
				count = 0;
				for(int i=0;i<strlen(str);i++){
					if('0'<str[i] && '9'>str[i]){
						count++;
					}
				}
				printf("So luong chu so trong chuoi:%d\n",count);
				break;
			case 6:
				count = 0;
				for(int i=0;i<strlen(str);i++){
					count++;
					if('a'<str[i] && 'z'>str[i]){
						count--;
					}else if('0'<str[i] && '9'>str[i]){
						count--;
					}else if(str[i]==32){
						count--;
					}
					
				}
					
				printf("So luong ki tu dac biet trong chuoi:%d\n",count);
				break;
			case 7:
				exit (0); 
				break;
			default:
				printf("Vui long nhap tu 1-7");
				
		}
		
	}while(1==1);
}
