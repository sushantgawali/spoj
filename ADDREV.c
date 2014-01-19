#include <stdio.h>

int addAndReverse(int,int);
int reverserNo(int);

int main()
{
 int i,j,n,k,runs ;
 scanf("%d",&runs) ;
 while(runs--)
 {
  scanf("%d %d",&n,&k);
  int ret = addAndReverse(n,k);
  printf("%d\n",ret) ;
 }
 return 0 ;
      
}

int addAndReverse(int n1,int n2){
   return reverserNo(reverserNo(n1) + reverserNo(n2));
}

int reverserNo(int no){
   int t2=0;
   while(no>0){
      t2 = (no%10)+(t2*10);
      no=no/10;
   }
   return t2;
}

