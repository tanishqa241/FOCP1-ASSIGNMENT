/* Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant
 in game development and robotics navigation*/
 #include<Stdio.h>
 int main (){
   float x,y;
   printf(" write the value of x coordinate");
   scanf("%f",&x);
   printf(" write the value of y coordinate");
   scanf("%f",&y);
   if(x>0&&y>0){
    printf("First Quadrant");
   }
   else if(x>0&&y<0){
    printf("Fourth Quadrant");
   }
   else if(x<0&&y>0){
    printf("Second Quadrant");
   }
   else if(x<0&&y<0){
    printf("Third Quadrant");
   }
   else if(x=0)
   {
    printf("Its on Y axis");
   }
   else{
    printf("its on X axis");
   }
   return 0;
 }