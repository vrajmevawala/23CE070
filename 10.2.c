//Define the union
union library
{
    char title[20];
    char author[30];
    double accession;
    float price;
    int flag;
};
int main()
{
    //Declare a veriable of type union library
    union library book;
    //Enter data for the book
    printf("Accession number : ");
    scanf("%lf", &book.accession);
    printf("Enter the title : ");
    scanf("%s", &book.title);
    printf("Enter the Name Of Author : ");
    scanf("%s", &book.author);
    printf("Enter the price : " );
    scanf("%f", &book.price);
    printf("Flag = ");
    scanf("%d", &book.flag);
    printf("	\n");
    if(book.flag==1)
    {
        printf("Book is issued");
    }
    else
    {
        printf("Book is not issued");
    }
    printf("\n23CE070_Vraj mevawala");
}
