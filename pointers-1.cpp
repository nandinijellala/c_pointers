//pointers
//&--->adress for
//*---?value at address(object at that location)
#include<stdio.h>
main()
{
	int a=10;
	printf("the value of a is %d\n",a);
	printf("the value of a is %u\n",&a);//actual adress
	printf("the value of a is %x\n",&a);//hexadecimal address
	printf("address of a is %p\n",&a);
	//printf("address of a is %d\n",*a);
	printf("the value of a is %d",*&a);
}
