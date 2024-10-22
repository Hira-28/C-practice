#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
for(int i=1;i<=T;i++){
    int n;
    int riv=0;
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        riv=riv*10+temp%10;
        temp=temp/10;
    }
    if(riv==n){
        printf("Case %d: Yes\n",i);

    }
    else{
        printf("Case %d: No\n",i);
    }

}
}
