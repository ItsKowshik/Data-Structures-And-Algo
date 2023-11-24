#include <bits/stdc++.h>

using namespace std;

int f(int n, int m, int* A, int* B){
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans = ans + (A[i]*B[j]*((i+1)+(j+1)));
        }
    }
    //printf("%d\n",ans);
    return ans % 998244353;
}


int * queries(int n, int m, int* A, int* B, int q, int** Q, int *out){
    int *ans = (int *)malloc(sizeof(int)*1000);
    ans[0] = f(n,m,A,B);
    *out = 1;
    for(int i = 0; i < q; i++){
        if(Q[i][0]==1){
            //cout<<"Reached here"<<endl;
            int k = A[Q[i][1]-1];
            //cout<<k<<endl;
            A[Q[i][1]-1] = B[Q[i][2]-1];
            B[Q[i][2]-1] = k;
            /*for(int i=0;i<n;i++){
                printf(" %d",A[i]);
            }
            printf("\n");
            for(int i=0;i<m;i++){
                printf(" %d",B[i]);
            }
            printf("\n");*/
            ans[*out] = f(n,m,A,B);
            (*out)++;
            //printf("%d",*out);
        }
        else if(Q[i][0]==2){
            int k = A[Q[i][1]-1];
            A[Q[i][1]-1] = A[Q[i][2]-1];
            A[Q[i][2]-1] = k;
            ans[*out] = f(n,m,A,B);
            (*out)++;
        }
        else{
            int k = B[Q[i][1]-1];
            B[Q[i][1]-1] = B[Q[i][2]-1];
            B[Q[i][2]-1] = k;
            ans[*out] = f(n,m,A,B);
            (*out)++;

        }
        printf("%d",*out);
        printf("\n");

    }
    return ans;





}

int main(){
    int t,out;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);
        int *A = (int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        int *B = (int *)malloc(sizeof(int)*m);
        for(int i=0;i<m;i++){
            scanf("%d",&B[i]);
        }
        int q;
        scanf("%d",&q);
        int **Q = (int **)malloc(sizeof(int)*q);
        for(int i=0; i<q; i++){
            Q[i] = (int *)malloc(sizeof(int)*3);
        }
        for(int i=0;i<q;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&Q[i][j]);
            }
        }
        int *ans = queries(n,m,A,B,q,Q,&out);
        printf("%d",ans[0]);
        for(int i=1; i<out; i++){
            printf(" %d",ans[i]);
        }
        printf("\n");
    }
}