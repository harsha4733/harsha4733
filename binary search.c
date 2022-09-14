- 👋 Hi, I’m @harsha4733
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...

<!---
harsha4733/harsha4733 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
#include<stdio.h>
int main()
{
 int a[100],s,n,i,flag = 0,mid,high,low;
 printf("Enter the Number of Elements : ");
 scanf("%d",&n);
 for(i = 0;i < n;i++){
  printf("Enter : ");
  scanf("%d",&a[i]);
 }
 printf("\n");
 printf("Enter the Element you want to Search For : ");
 scanf("%d",&s);
 high = n;
 low = 1;
 mid = (high+low)/2;
 while(s != a[mid]){
  if(s <= a[mid]){
   low = 1;
   high = mid + 1;
   mid = (low + high)/2;
  }
  else
  {
   low = mid + 1;
   high = n;
   mid = (low+high)/2;
  }
 }
 printf("The Element %d is found at index %d",s,mid);
 return 0;
}
