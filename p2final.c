#include<stdio.h>
#include<math.h>
#define pi 3.14

typedef struct camel
{
  float radius,height,length,weight;
}Camel;

Camel input()
{
  Camel c;
  printf("Enter the stomach radius of the camel: ");
  scanf("%f",&c.radius);
  printf("Enter the height of the camel: ");
  scanf("%f",&c.height);
  printf("Enter the length of the camel: ");
  scanf("%f",&c.length);
  return c;
}

void find_weight(Camel *c)
{
  c->weight=pi*pow(c->radius,3)*sqrt(c->height*c->length);
}

void output(Camel c)
{
  printf("The weight of the camel with stomach radius %f, height %f and length %f is %f",c.radius,c.height,c.length,c.weight);
}

int main()
{
  Camel parameters;
  parameters=input();
  find_weight(&parameters);
  output(parameters);
}