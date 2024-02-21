#include <stdio.h>
float gradW1(float x1, float x2, float y, float w1, float w2){
float Er1 = 2*(y-((w1*x1)+(w2*x2)) * (-x1));
return Er1;
}
float gradW2(float x1, float x2, float y, float w1, float w2){
float Er2 = 2*(y-((w1*x1)+(w2*x2)) * (-x2));
return Er2;
}
int main() {
float w1 = 1, w2 = 7;
float arr[4][3] = {{0,1,1},{2,1,9},{1,0,1},{-2,1,7}};
for (int i=0; i<4;i++){
float dw1 =gradW1(arr[i][0],arr[i][1],arr[i][2], w1,w2);
float dw2 = gradW2(arr[i][0],arr[i][1],arr[i][2], w1,w2);
printf("dE/dw1= %f \n",dw1);
printf("dE/dw2= %f \n\n",dw2);
}
return 0;
}
