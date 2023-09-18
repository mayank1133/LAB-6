int main()
{
    char ch;
    printf("Enter the cheracter:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("The cheracter you enteered is Uppercase letter\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("The cheracter you enteered is lowercase letter\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("The cheracter you enteered is number\n");
    }
    else
    {
        printf("The cheracter you enteered is special cheracter\n");
    }
    return 0;
}
