#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DemSoChiaHet(int n)
{
    int count = 0, i;
    for (i=0; i<=n; i++){
            if (i%3 ==0 || i%5 ==0){
                count ++;
                printf("%d ",i);
    }
    }
    printf("\nCo tong cong %d so chia het cho 3 hoac 5 tu 0 den %d", count, n);
    return 0;
}

int TongNghichDao(int n){
    float sum=0;
    int i;
    for (i=1; i<=n; i++){
        sum += (float)1/i;
    }
    printf("\nTong nghich dao tu 1 den %d la: %.2f", n, sum);
    return 0;
}

int SoDaoNguoc(int n){
    
    printf("\nSo dao nguoc cua %d la: ", n);
    while(n>10){
        printf("%d",n%10);
        n=n/10;
    }
    printf("%d",n);
    return 0; 
}

int SoHoanHao(int n){
    int i, j, sum =0;
    printf("\nCac so hoan hao tu 1 den %d la: ", n);
    for (i=1; i<=n; i++){
        for (j=1; j<i; j++){
            if (i%j==0){
                sum += j;
            }
        }
        if (sum==i){
            printf("%d ", i);
        }
    }
    return 0;
}

int InHinhTamGiacPascal(int n){
    int i, j, k, a, b;
    // Cong thuc n!/k!/(n-k)!

    for (i=0; i<n;i++){
        int S1=1;
        ///Tinh n!
        for (k=0; k<=i;k++){
            if (k==0){
                S1=S1*(k+1);
            } else {
                S1=S1*k;
            }
        }

        for (j=0; j<=i;j++){
            int S2=1, S3=1;
            // Tinh k!
            for (a=0; a<=j; a++){
                if (a==0){
                    S2=S2*(a+1);
                } else  {
                    S2=S2*a;
                }
            }
            //Tinh (n-k)!
            for (b=0; b<= (i-j); b++){
                if (b ==0){
                    S3=S3*(b+1);
                } else {
                    S3=S3*b;
                }
            }
            printf("%d  ", S1/(S2*S3));
        }
        printf("\n");
    }
    return 0;
}

int RutTien(int n){
    int l=0, l1=0, l2=0, l3=0, l4=0;

    if (n%50000!=0){
        printf("So tien can rut phai la boi so cua 50k");
        int Nhapn();
    }

    if (n/500000>=1){
        l1 =l+n/500000;
        n=n%500000;
        if (l1>20){
            printf("Qua gioi han so to");
        }   
    }

    if (n/200000>=1){
        l2 =n/200000;
        n=n%200000;
        if (l1+l2>20){
            printf("Qua gioi han so to");
        }
    }

    if (n/100000>=1){
        l3 =n/100000;
        n=n%100000;
        if (l1+l2+l3>20){
            printf("Qua gioi han so to");
        }
    }

    if (n/50000>=1){
        l4 =n/50000;
        n=n%50000;
        if (l1+l2+l3+l4>20){
            printf("Qua gioi han so to");
        }
    }
    printf("So tien ban se nhan duoc la 500k %d to, 200k %d to, 100k %d to, 50k %d to", l1, l2, l3, l4);
    return 0;
}

int TroChoiDoanSo(){
    int n, i, l=0;

    srand(time(NULL));
    i=rand()%100 +1;

    printf("Tro choi doan so tu 1 den 100");

    do {
        printf("Moi ban chon so: ");
        scanf("%d", &n);
        l++;
        
        if (n<i){
            printf("Nho hon\n");
        } else if (n>i){
            printf("Lon hon\n");
        } else{
            printf("Chuc mung! Ban da doan dung sau %d lan.\n", l);
        }
    } while (i!=n);
    return 0;

}

int FizzBuzz(int n){
    int i;
    for (i=1; i<=n; i++){
        if (i%3 ==0 && i%5 ==0){
            printf("FizzBuzz  ");
        }else if (i%5==0){
            printf("Buzz  ");
        } else if (i%3 ==0){
            printf("Fizz  ");
        } else{
            printf("%d  ", i);
        }
    }
    return 0;
}

int MayBanHangTuDong(){
    int n, u;
    n=0, u=0;

    printf("Menu san pham:\n 1. Nuoc suoi (10k)\n 2. Nuoc ngot (15k)\n 3.Ca phe (20k)\n 4.Tra sua (25k) 5.Thoat\n");
    printf("Moi ban nhap so tien:  ");
    scanf("%d", &n);
    


    do{
        printf("Chon do uong ban muon mua: ");
        scanf("%d", &u);

        switch(u){
            case 1:
                if (n-10000<0){
                    printf("Khong du tien\n");
                    n=-1;
                } else if(n==0){
                    printf("Hen gap lai lan sau!\n");
                    n=-1;
                } else{
                    n=n-10000;
                    printf("Nuoc suoi da san sang!\n");
                    printf("So tien con lai: %d\n", n);
                }
                break;

            case 2:
                if (n-15000<0){
                    printf("Khong du tien\n");
                    n=-1;
                } else if(n==0){
                    printf("Hen gap lai lan sau!\n");
                    n=-1;
                } else{
                    n=n-15000;
                    printf("Nuoc ngot da san sang!\n");
                    printf("So tien con lai: %d\n", n);
                }
                break;

            case 3:
                if (n-20000<0){
                    printf("Khong du tien\n");
                    n=-1;
                } else if(n==0){
                    printf("Hen gap lai lan sau!\n");
                    n=-1;
                } else{
                    n=n-20000;
                    printf("Ca phe da san sang!\n");
                    printf("So tien con lai: %d\n", n);
                }
                break;

            case 4:
                if (n-25000<0){
                    printf("Khong du tien\n");
                    n=-1;
                } else if(n==0){
                    printf("Hen gap lai lan sau!\n");
                    n=-1;
                } else{
                    n=n-25000;
                    printf("Tra sua da san sang!\n");
                    printf("So tien con lai: %d\n", n);
                }
                break;

            case 5:
                printf("Hen gap lai lan sau!\n");
                n=-1;
                break;
            
            default:
                printf("Lua chon khong hop le!\n");

        }

    } while (n>0);

    return 0;
}


int Nhapn()
{
    int n;
    printf("Nhap so nguyen duong n: "); 
    scanf("%d", &n);
    if (n<=0){
        printf("So khong hop le, vui long nhap lai\n");
        Nhapn();
    }
    return n;
}


void main(){ 
    int i, n;
    printf("Chon bai toan:\n");
    scanf("%d", &i);

    switch(i){
        case 1:
            n=Nhapn();
            DemSoChiaHet(n);
            break;
        case 2:
            n=Nhapn();
            TongNghichDao(n);
            break;
        case 3:
            n=Nhapn();
            SoDaoNguoc(n);
            break;
        case 4:
            n=Nhapn();
            SoHoanHao(n);
            break;
        case 5:
            n=Nhapn();
            InHinhTamGiacPascal(n);
            break;
        case 6:
            printf("Da giai o DevLinux 01!");
            break;
        case 7:
            n=Nhapn();
            RutTien(n);
            break;
        case 8:
            TroChoiDoanSo();
            break;
        case 9:
            n=Nhapn();
            FizzBuzz(n);
            break;
        case 10:
            MayBanHangTuDong();
            break;
        default:
            printf("Lua chon khong hop le!");
    }
}