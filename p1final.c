#include <stdio.h>
#include<math.h>
#define pi 3.14

float input_radius()
{
  float a;
  printf("Enter the stomach radius of the camel: ");
  scanf("%f",&a);
  return a;
}

float input_height()
{
  float a;
  printf("Enter the height of the camel: ");
  scanf("%f",&a);
  return a;
}

float input_length()
{
  float a;
  printf("Enter the length of the camel: ");
  scanf("%f",&a);
  return a;
}

float find_weight(float radius,float height,float length)
{
  float weight;
  weight=pi*pow(radius,3)*sqrt(height*length);
  return weight;
}

void output(float radius,float height,float length,float weight)
{
  printf("The weight of the camel with stomach radius %f, height %f and length %f is %f",radius,height,length,weight);
}

int main()
{
  float sr,h,l,w;
  sr=input_radius();
  h=input_height();
  l=input_length();
  w=find_weight(sr,h,l);
  output(sr,h,l,w);
}