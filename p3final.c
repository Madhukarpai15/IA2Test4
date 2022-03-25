#include<stdio.h>
#include<math.h>
#define pi 3.14

typedef struct camel
{
  float radius,height,length,weight;
  int mood;
}Camel;

Camel input()
{
  Camel c;
  printf("Enter the stomach radius of the camel: ");
  scanf("%f",&c.radius);
  printf("Enter the height of the camel: ");
  scanf("%f",&c.height);
  printf("Enter the lenght of the camel: ");
  scanf("%f",&c.length);
  return c;
}

void find_weight(Camel *c)
{
  c->weight=pi*pow(c->radius,3)*sqrt(c->height*c->length);
}

void find_mood(Camel *c)
{
  if(c->radius<c->height && c->radius<c->length)
  {
    c->mood=0;
  }
  else if(c->height<c->length && c->height<c->radius)
  {
    c->mood=1;
  }
  else if(c->length<c->height && c->length<c->radius)
  {
    c->mood=2;
  }
}

void output(Camel c)
{
  if(c.mood==0)
  {
    printf("The camel is sick.");
  }
  else if(c.mood==1)
  {
    printf("The camel is happy.");
  }
  else if(c.mood==2)
  {
    printf("The camel is tense.");
  }
}

int main()
{
  Camel parameters;
  parameters=input();
  find_weight(&parameters);
  find_mood(&parameters);
  output(parameters);
  
}