#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1.Khai bao mang mot chieu co so nguyen gom 100 phan tu
int main(){
	int arr[100];
	int n = 0;
	int size;
	int sumNumbers;
	int min, max;
	int sum;
	int is_prime;
//2.In menu
    do{
        printf("\n**************MENU******************\n");
        printf("1.Nhap gia tri n phan tu cua mang(n nhap tu ban phim)\n");
        printf("2.In ra cac phan tu trong mang\n");
        printf("3.Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
        printf("4.In ra gia tri phan tu lon nhat va nho nhat trong mang\n");
        printf("5.Su dung thuat toan sap xep chen sap xep mang tang dan\n");
        printf("6.Tinh tong cac phan tu la so nguyen to trong mang\n");
        printf("7.Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan chia het cho 5 o cuoi mang chia het cho 5 theo thu tu tang dan, cac phan tu con lai o giua mang theo thu tu giam dan\n");
        printf("8.Nhap gia tri m tu ban phim, chen gia tri m vao mang(sap xep tang dan) dung vi tri\n");
        printf("9.Thoat\n");
    
        printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao gia tri n phan tu cua mang:\n");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					printf("numbers[%d]=",n);
					scanf("%d",&arr[n]);
					n++;
				}
				break;	
			case 2:
				printf("Cac phan tu trong mang la:\n");
			    for(int i = 0; i < n ; i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;	
			case 3:
			    sum = 0;
                for(int i = 0; i < n; i++){
                    if (arr[i] % 2 == 0 && arr[i] % 3 == 0){
                    sum += arr[i];
                    }
                }
                printf("Tong cac phan tu chia het cho 2 va 3 trong mang la: %d\n", sum);
				break;	
			case 4:
				min = arr[0];
				max = arr[0];
				for(int i=1;i<n;i++){
					if(min>arr[i]){
						min = arr[i];
					}
					if(max<arr[i]){
						max = arr[i];
					}
				}
				printf("Gia tri lon nhat: %d - Gia tri nho nhat: %d\n",max,min);
				break;	
			case 5:
			    for(int i=0;i<n;i++){
	                int key =arr[i];
	                int j=i-1;
	            while(j>=0 && arr[j]>key){
	                arr[j+1]=arr[j];
	                j = j - 1;
	            }
	            arr[j+1]=key;
		            }
				printf("Sap xep mang tang dan: \n");
				for(int i = 0 ; i < n ; i++){
				printf("%d\t", arr[i]);
				}
				printf("\n");
				break;
			case 6:
				sumNumbers = 0;
				printf("Cac phan tu la so nguyen to trong mang la: ");
				for(int i = 0 ; i < n ; i++){
					int is_prime = 0;//0:La so nguyen to - 1: ko phai so nguyen to
					if(arr[i]>=2){
						for(int j=2;j<=sqrt(arr[i]);j++){
							if(arr[i]%j==0){
								is_prime = 1;
								break;
							}
						}
					}else {
						is_prime=1;
					}
					if(is_prime==0){
						printf("%d\t",arr[i]);
						sumNumbers+=arr[i];
					}
				}
				printf("\nTong cac so nguyen to la: %d\n",sumNumbers);
				break;	
			case 7:
				printf("Em xin loi em khong biet lam a!!!");
				break;	
			case 8:
				printf("Em xin loi em khong biet lam a!!!!");
				break;
			case 9:
				printf("Ket Thuc!!!");
				exit(0);
            default:
                printf("Lua chon khong hop le. Vui long lua chon lai!!\n");
                break;
	    }
	}while(1==1);
}
