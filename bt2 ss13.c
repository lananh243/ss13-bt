#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100];
    char find; 
    int count=0;
    char newValue;
	do{
		printf("1.Nhap vao chuoi ky tu\n");
		printf("2.In ra noi dung chuoi\n");
		printf("3.Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi\n");
		printf("4.Nhap vao 2 ky tu, thay the cac ky tu thu 2 trong chuoi thanh ky tu thu nhat\n");
		printf("5.Nhap vao 1 ky tu, xoa bo cac ky tu trong chuoi\n");
		printf("6.Thoat\n");
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
				printf("Chuoi vua nhap la:%s\n",str);
				break;
			case 3:
				printf("Nhap phan tu muon tim kiem: ");
                scanf(" %c", &find);
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] == find) {
                        count ++;
                    }
                }
                printf("So lan xuat hien cua ky tu do la: %d\n", count);
                break;
            case 4:
            	printf("Nhap phan tu muon thay the: ");
                scanf(" %c", &find);
                printf("Nhap ki tu muon thay the: ");
                scanf(" %c", &newValue);
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] == find) {
                        str[i] = newValue;
                    }
                }
                printf("%s\n", str);
                break;
			case 5:
				count=0; 
				printf("Nhap phan tu muon xoa: ");
                scanf(" %c", &find);
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] != find) {
                        str[count] = str[i];
                        count++; 
                    }
                }
                str[count] = '\0';
                printf("%s\n", str);
                break;
			case 6:
				exit(0);
				break;
			default :
				printf("Vui long nhap tu 1-6");
				
		}
    }while(1==1);
    
} 
