/*
 * File: 101-print_comb4.c
 * Auth: Boitumelo C Rachoshi
 */
int main(void)
{ /* Declarations*/
int d1;
int d2;
int d3;



for (d1=0;d1<9;d1++)
{for(d2=d1+1;d2<10;d2++)
{for(d3=d2+1;d3<10;d3++)

{
putchar(d1+'0');
putchar(d2+'0');
putchar(d3+'0');
if (d1 == 7 && d2 == 8 && d3 == 9)
continue;
putchar(',');
putchar(' ');
}

}
}     

putchar('\n');

return (0);
}
