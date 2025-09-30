#include <stdio.h>

void main()
{
int n, n1, n2, n3, n4, n5, n6, n71, n72, n73, n81, n82, n91, n92, n101, n102, n103;
char n83;
printf("Chon bai toan can giai:\n");
scanf("%d", &n); 

switch(n){
    case 1:
       printf("Nhap 1 so nguyen: "); 
       scanf("%d", &n1);
       if (n1%2==0){
          printf("So %d la so chan", n1);
       }
       else{
          printf("So %d la so le", n1);
       }
       break;


    case 2:
        printf("Nhap 1 so nguyen: "); 
        scanf("%d", &n2);
        if (n2>0){
           printf("So %d la so duong", n2);
        }
        else if (n2<0){
           printf("So %d la so am", n2);
        }
        else{
           printf("So %d la so 0", n2);
        }
        break;



    case 3:
        printf("Nhap diem so: "); 
        scanf("%d", &n3);
        if (n3>100 && n3<0){
           printf("Diem so khong hop le");
        }
        if (n3<=100 && n3>=90){
            printf("Xuat sac");
          }
        else if (n3<=89 && n3>=80){
           printf("Gioi");
        }
        else if (n3<=79 && n3>=65){
           printf("Kha");
        }
        else if (n3>=64 && n3<=50){
           printf("Trung binh");
        }
        else {
           printf("Yeu");
        }
         break;



    case 4:
        printf("Nhap tuoi: "); 
        scanf("%d", &n4);
        if (n4>=18){
           printf("Du dieu kien thi bang lai xe");
        }
        else{
           printf("Chua du tuoi thi bang lai xe");
        }
        break;



    case 5:
        printf("Nhap 1 so ngau nhien tu 1 den 7: "); 
        scanf("%d", &n5);
        if (n5<1 && n5>7){
           printf("So khong hop le");
        }
        else{
           switch(n5){
               case 1:
                   printf("Thu Hai");
                   break;
               case 2:
                   printf("Thu Ba");
                   break;
               case 3:
                   printf("Thu Tu");
                   break;
               case 4:
                   printf("Thu Nam");
                   break;
               case 5:
                   printf("Thu Sau");
                   break;
               case 6:
                   printf("Thu Bay");
                   break;
               case 7:
                   printf("Chu Nhat");
                   break;
                default:
                   printf("So khong hop le");
           }}
        break;



    case 6:
           printf("Nhap thang trong nam: "); 
           scanf("%d", &n6);
           switch (n6){
               case 1:
               case 3:
               case 5:
               case 7:
               case 8:
               case 10:
               case 12:
                   printf("Thang %d co 31 ngay", n6);
                   break;
               case 4:
               case 6:
               case 9:
               case 11:
                   printf("Thang %d co 30 ngay", n6);
                   break;
               case 2:
                   printf("Thang %d co 28 hoac 29 ngay", n6);
                   break;
                default:
                   printf("So khong hop le");}
        break;



    case 7:
        printf("Nhap 3 so nguyen: "); 
        scanf("%d%d%d", &n71, &n72, &n73);

        if (n71+n72>n73 && n71+n73>n72 && n72+n73>n71){
           printf("3 so vua nhap la 3 canh cua tam giac");
           if (n71==n72 && n72==n73){
              printf("\nTam giac deu");
           }
           else if (n71==n72 || n71==n73 || n72==n73){
              printf("\nTam giac can");
           }
           else if ((n71*n71==n72*n72+n73*n73) || (n72*n72==n71*n71+n73*n73) || (n73*n73==n71*n71+n72*n72)){
              printf("\nTam giac vuong");
           }
           else{
              printf("\nTam giac thuong");
           }
        }
        else{
           printf("3 so vua nhap khong phai la 3 canh cua tam giac");
        }
        break;



    case 8:
        printf("Nhap 2 so nguyen: ");
        scanf("%d%d", &n81, &n82);
        printf("Nhap phep toan (+, -, *, /): ");
        scanf(" %c", &n83); 
        switch(n83){
            case '+':
                printf("%d + %d = %d", n81, n82, n81+n82);
                break;
            case '-':
                printf("%d - %d = %d", n81, n82, n81-n82);
                break;
            case '*':
                printf("%d * %d = %d", n81, n82, n81*n82);
                break;
            case '/':
                if (n82==0){
                   printf("Khong the chia cho 0");
                }
                else{
                   printf("%d / %d = %.2f", n81, n82, (float)n81/n82);
                }
                break;
            default:
                printf("Phep toan khong hop le");
        }
        break;


    case 9:
        printf("Nhap loai hanh khach (1 = tre em, 2 = nguoi lon, 3 = nguoi gia): ");
        scanf("%d", &n91);
        printf("Nhap loai ngay (1 = thuong, 2 =  le): ");
        scanf("%d", &n92);
        if(n92 == 2){
            switch (n91)
            {
            case 1:
                printf("Gia ve la %f", 10000*1.5*0.7);
                break;
            case 2:
                printf("Gia ve la %.f",10000*1.5);
                break;
            case 3:
                printf("Gia ve la %f", 10000*1.5*0.8);
                break;
            default:
                break;
            }}
        else{
            switch (n91)
            {
            case 1:
                printf("Gia ve la %f", 10000*0.7);
                break;
            case 2:
                printf("Gia ve la %d", 10000);
                break;
            case 3:
                printf("Gia ve la %f", 10000*0.8);
                break;
            default:
                break;
            }
        }
        break;


    case 10:
        printf("Nhap so dien tieu thu trong thang:");
        scanf("%d", &n101);
        printf("Nhap loai ho (1= thuong, 2= chinh sach):");
        scanf("%d", &n102);
        if (n101 > 0 && n101 <=50){
            n103 = n101*1800;
        }
        else if (n101 > 50 && n101 <=100){
            n103 = 50*1800 + (n101-50)*2000;
        }
        else if (n101 > 100 && n101 <=200){
            n103 = 50*1800 + 50*2000 + (n101-100)*2500;
        }
        else if (n101 > 200 && n101 <=300){
            n103 = 50*1800 + 50*2000 + 100*2500 + (n101-200)*3000;
        }
        else if (n101 > 300){
            n103 = 50*1800 + 50*2000 + 100*2500 + 100*2700 + (n101-300)*3000;
            if (n102 == 2){
                n103 = n103*1.05;
            }
        }
        else{
            printf("So dien khong hop le");
        }

        if (n103 < 50000){
            printf("So tien phai tra la: 50000");
        }
        else if (n102 ==2){
            printf("So tien phai tra la: %.2f", n103*0.9);
        }
        else{
            printf("So tien phai tra la: %d", n103);
        }
        break;
    default:
        printf("Khong co bai toan can giai");
}
}
