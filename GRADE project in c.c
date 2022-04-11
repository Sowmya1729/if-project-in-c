#include<stdio.h>

main()
{
int marks;
printf("Enter your marks: "); 
scanf("%d",&marks);
if(marks>85 && marks<100)
{
printf("GRADE A");
} 
else if(marks>74 && marks<84)
{
printf("GRADE B");
}
else if(marks>55 && marks<69)
{
printf("GRADE C");
}
else if(marks>40 && marks<54)
{
printf("GRADE D");
}
else
{
printf("GRADE F");
}
return 0;
}

