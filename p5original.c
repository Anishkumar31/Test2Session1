#include<stdio.h>
int input_arrray_size(){
  int n;
  printf("Enter the array size : ");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n]){
  for(int i=0;i<n;i++){
    scanf("%d",i);
  }
}
void erostosthenes_sieve(int n,int a[n]){
  for(int i=0;i<n;i++){
    d=a[i];
    sqr=a[i]*a[i];
    while(a[i]<=sqr){
      if(a[i]%d==0){
        a[i]=0;
      }
    }
  }
}
void out_put(int n,int a[n]){
  
}
int main(){
  int n;
  n = input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
}