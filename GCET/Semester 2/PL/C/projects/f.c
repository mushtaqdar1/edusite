int sum()
{
    int a,b,add=0;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    add=a+b;
    printf("sum=%d",add);
}
int main()
{
    sum();
    sum();
    printf("resuability");
    sum();
}
