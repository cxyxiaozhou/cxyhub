#include<stdio.h>

int main()
{
  printf("Animal inside structs \n");
  printf("	vfptr:		\n");
  printf("	v-virtual	\n");
  printf("	f-function	\n");
  printf("	ptr-pointer	\n");
  printf("	vfptr		\n");
  printf("           |		\n");
  printf("           V		\n");
  printf("         vftableb	表内记录虚函数地址\n");
  printf("-----------------------------------------\n");
  printf("|	&Animal::speak		 	|\n");
  printf("-----------------------------------------\n");
  printf("Cat inside structs \n");
  printf("           |		\n");
  printf("           V		\n");
  printf("-----------------------------------------\n");
  printf("|	&Animal::speak		 	|\n");
  printf("|   子类继承过来重写虚函数时会把父类的替换   |\n");
  printf("|	&Cat::speak	   		|\n");
  printf("-----------------------------------------\n");
  printf("cl /reportSingleClassLayoutAnmal  'file.cpp'\n");
  printf("void speak() \n"); 
  printf("class Animal  size(1) : \n");
  printf("        +----\n");
  printf("        +----\n");
  printf("virtual void speak() \n");
  printf("class Animal  size(4) \n");
  printf("        +----\n");
  printf(" 0      | vfptr   \n");
  printf("        +----\n");
  printf("Animal::vftable@:\n");
  printf("	&Animal_meta\n");
  printf("	0\n");
  printf("	&Animal::speak\n");
  
  
  printf("virtual void speak() \n");
  
  
}
