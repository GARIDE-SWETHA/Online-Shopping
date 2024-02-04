#include<stdio.h>
#include<stdlib.h>
int main()
{
    int registration,information;
    int age,x;
    int i,n,p,sum=0;
    int purchase[10],multiple,bookcost[5]= {1100,900,1000,800,600},paymentid;
    int watches[5]={11000,2000,25000,47000,15000};
    int laptops[5]={65000,131000,86000,93000,80000};
    int phones[5]={19000,65000,124700,40000,18000};
    char username[20];
    char password[10];
    char gmail[30];
    char shippingaddress[50];
    printf("------WELCOME-------\n");
    printf("\nEnter the website url on to the browser:");
    printf("\nThe website page is opened.");
    printf("\nEnter registration digit :");
    scanf("%d",&registration);
    printf("\nThe registration digit is %d\n",registration);
    if(registration>=1)
    {
    if(registration==1)    //if registration==1 then registered.
    {
        printf("\nYou already have an account.\n");
        printf("Please SIGN IN:");
        printf("\nEnter the username:");
        scanf("%s",username);
        printf("\nThe username entered is %s",username);
        printf("\nEnter the password:");
        scanf("%s",password);
        printf("\n The entered password is %s",password);
        }
    else   //if registration>1 then not registered
    {
       printf("\nYou do not have an account.\n");
        printf("\nPlease SIGN UP:");
        printf("\nEnter the username:");
        scanf("%s",username);
        printf("\nThe username entered is %s",username);
        printf("\nEnter the password:");
        scanf("%s",password);
        printf("\nThe entered password is %s",password);
        printf("\nEnter the gmail:");
        scanf("%s",gmail);
        printf("\nThe entered gmail is %s",gmail);
        printf("\nEnter age:");
        scanf("%d",&age);
        printf("\nThe entered age is %d",age);
    }
       
}
//Searching and selection of products.
printf("\nSearch the products of your choice on the website homepage\n");
printf(" 1.Books \n 2.Watches \n 3.Phones \n 4.Laptops \n ");
printf("Select the product of your choice:\n");
scanf("%d",&n);
switch (n)
{
case 1:
   printf("\n 1.IIT-JEE Advance Guide --- 1100â‚¹\n 2.AIEEE Guide --- 900â‚¹\n 3.BITSAT Guide --- 1000â‚¹\n 4.EAMCET Guide --- 800â‚¹\n 5.IPE Guide --- 600â‚¹\n");
   printf("Quantity : \n");
   scanf("%d",&multiple);
   printf("Please Enter Book-ID : \n");
   for (int k = 0; k < multiple; k++)
   {
       scanf("%d",&purchase[k]);
       x=purchase[k];
    if (x>=0 && x<=5)
    {
        sum+=bookcost[x-1];
    }
    else{
    printf("Invalid Option \n");
    exit(0);
    }

   }
 
   printf("\nADDED TO CART...\n");
   printf("Total Cost is %d",sum);
   break;
 
   case 2:
   printf("\n 1.Fossil\n 2.Fastrack\n 3.Diesel\n 4.Apple\n 5.Oneplus\n");
   printf("Quantity : \n");
   scanf("%d",&multiple);
   printf("Enter Watch-ID : \n");
   for (int k = 0; k < multiple; k++)
   {
       scanf("%d",&purchase[k]);
       x=purchase[k];
    if (x>=0 && x<=5)
    {
        sum+=watches[x-1];
    }
    else
    {
    printf("Invalid Option \n");
    exit(0);  
    }
   }
 
   printf("\nADDED TO CART...\n");
   printf("Total Cost is %d",sum);
   break;

   case 3:
   printf("\n 1.Redmi Note 10PRO\n 2.OnePlus 9 Pro\n 3.iPhone 13 PRO MAX\n 4.Oppo Reno 7 PRO\n 5.Vivo 15 PRO\n");
   printf("Quantity : \n");
   scanf("%d",&multiple);
   printf("Enter Smartphone-id : \n");
   for (int k = 0; k < multiple; k++)
   {
       scanf("%d",&purchase[k]);
       x=purchase[k];
    if (x>=0 && x<=5)
    {
        sum+=phones[x-1];
    }
    else{
    printf("Invalid Option \n");
    exit(0);  
    }
   }
 
   printf("\nADDED TO CART...\n");
   printf("Total Cost is %d",sum);
   break;

   case 4:
   printf("\n 1.HP-Pavillion\n 2.Dell-XPS\n 3.Apple MAC Book-Air\n 4.ASUS ROG ZEPHYRUS\n 5.Lenovo Yoga-Book\n");
   printf("Quantiy : \n");
    scanf("%d",&multiple);
   printf("Enter Laptop-ID : \n");
   for (int k = 0; k < multiple; k++)
   {
       scanf("%d",&purchase[k]);
       x=purchase[k];
    if (x>=0 && x<=5)
    {
        sum+=laptops[x-1];
    }
    else{
    printf("Invalid Option \n");
    exit(0);
    }  
   }
 
   printf("\nADDED TO CART...\n");
   printf("Total Cost is %d",sum);
   break;

default:
printf("Invalid Option");
exit(0);
    break;
}
printf("\nEnter Your Shipping Infromations : \n");
scanf("%s",shippingaddress);
printf("\n Payment-Method : \n");
printf("\n 1.Cash-on Delivery\n 2.Debit/Credit Card\n 3.UPI\n");
scanf("%d",&paymentid);

printf("\n Your Order Has been Placed ...\n");
printf("\nTHANK YOU FOR SHOPPING WITH US , PLEASE VISIT AGAIN!!!\n");
} 
