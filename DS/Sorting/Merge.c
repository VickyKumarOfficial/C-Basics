#include <stdio.h>
int a[];
void merge(int l,int m,int h)
{
  int i=l;
  int j=m+1;
  int k=0;
  int b[h+1];
  while((i<=m)&&(j<=h)) {   // shortest array will be merged
    if(a[i]<a[j]) {
      b[k]=a[i];
      i++;
    }
    else {
      b[k]=a[j];
      j++;
    }
    k++;
  }
    while(j<=h) {
      b[k]=a[j];
      j++;
      k++;
    }
    while(i<=m) {
      b[k]=a[i];
      i++;
      k++;  
    }
    for(i=l,k=0;i<=h;i++,k++) {
      a[i]=b[k];
    }
}
void mergesort(int l,int h) {
  if(l<h) {
    int m;
    m=(l+h)/2;
    mergesort(l,m);
    mergesort(m+1,h);
    merge(l,m,h);
  }

}
int main()
{
  int n,i;
  printf("Enter size of an array: ");
  scanf("%d",&n);
  printf("Enter elements in an array: ");
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  mergesort(0,n-1);
  printf("Sorted array: \n");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
