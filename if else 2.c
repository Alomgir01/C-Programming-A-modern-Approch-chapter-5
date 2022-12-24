int main()
{
    int i=1,j=2,k;
   k=i>j?i:j;
   k=(i>=0?i:0)+j;
   printf("large is :%d\n",k);
   {
       if(i<j)
        return i;
       else
        return j;
       printf("%d",i<j);
   }

}
