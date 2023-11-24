#include <bits/stdc++.h>

using namespace std;

int giveLeftMax(int l, int r, int* arr){
    int val = 1;
    for(int i=l; i<r;i++){
        if(arr[i]>val){
            val = arr[i];
        }
    }
    return val;
}


int giveRightMax(int l, int r, int* arr){
    int val = 1;
    for(int i=l+1; i<r;i++){
        if(arr[i]>val){
            val = arr[i];
        }
    }
    return val;
}


int printMax(int n, int* arr, int* query){
    int left = query[0]-1;
    int right = query[1]-1;
    int left_max = giveLeftMax(0,left,arr);
    int right_max = giveRightMax(right,n,arr);
    if(left_max>=right_max){
        //printf("%d\n",left_max);
        return left_max;
    }
    else{
        //printf("%d\n",right_max);
        return right_max;
    }
}

int main(){
    int n, q;
    scanf("%d %d",&n,&q);
    //printf("%d %d",n,q);
    int* arr = (int*)malloc(sizeof(int)*n);
    int *query = (int*)malloc(sizeof(int)*2);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    while(q--){
        for(int i=0; i<2; i++){
            scanf("%d", &query[i]);
        }
        /*for(int i=0; i<2; i++){
            printf(" %d", query[i]);
        }
        printf("\n");*/
        int ans = printMax(n,arr,query);
        printf("%d\n",ans);
    }
    return 0;
}