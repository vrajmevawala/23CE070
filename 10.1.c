#include<stdio.h>
#include<string.h>
struct book
{
    char name[10]; char author[20]; float price;
};
void main()
{
    struct book b1;
    sizeof(b1);
    printf("Size is %d", sizeof(b1));
    printf("\nEnter the name of book : ");
    scanf("%s", &b1.name);
    printf("Enter the author of book : ");
    scanf("%s", &b1.author);
    printf("Enter the price of book : ");
    scanf("%f", &b1.price);
    printf("\nThe name of book is %s", b1.name);
    printf("\nThe author of author is %s", b1.author);
    printf("\nThe price of book is %f", b1.price);
    printf("\n23CE070_Vraj mevawala");
}

