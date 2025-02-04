#include<stdio.h>

struct person
{
   char name[50];
   int rollNo;
   char clgName[50];
};


int main(){
   struct person p = {"om", 123, "NitKurukshetra"};

   printf("Name: %s\n",p.name);
   printf("Roll: %d\n",p.rollNo);
   printf("College Name: %s\n",p.clgName);
}