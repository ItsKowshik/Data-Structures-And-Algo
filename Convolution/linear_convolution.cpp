#include <bits/stdc++.h>

using namespace std;

void linear_conv(int *input,int *mask,int *output,int mask_width,int width){
    for(int i=0;i<width;i++){
        int start = i - floor(mask_width/2);
        int csum = 0;
        for(int j=0;j<mask_width;j++){
            if((start+j>=0) && (start+j<width)){
                csum+=input[start+j]*mask[j];
            }
        }
        output[i]= csum;
    }
}

int main(){
    int width;
    scanf("%d",&width);
    int input[width];
    for(int i=0;i<width;i++){
        scanf("%d",&input[i]);
    }
    int mask_width;
    scanf("%d",&mask_width);
    int mask[mask_width];
    for(int i=0;i<mask_width;i++){
        scanf("%d",&mask[i]);
    }
    int output[width];
    linear_conv(input,mask,output,mask_width,width);

    printf("The input array: ");
    for(int i=0;i<width;i++){
        printf("%d,",input[i]);
    }
    printf("\n");

    printf("The mask array: ");
    for(int i=0;i<mask_width;i++){
        printf("%d,",mask[i]);
    }
    printf("\n");

    printf("The output array: ");
    for(int i=0;i<width;i++){
        printf("%d,",output[i]);
    }
    printf("\n");

    return 0;


}