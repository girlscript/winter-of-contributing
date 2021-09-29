# Pattern in C 👨‍💻
Pattern programs are nothing but patterns consisting of numbers, alphabets or symbols in a particular form. These kinds of pattern programs can be solved easily using loop condition.
## Example:💡
There are various patterns in C language like star pattern, number patterns, and character patterns. In this section, we are going to discuss only Number and Star patterns.
| Index        | Types |
| ----------- | ----------- |
| 1.       | Number Pattern    |
| 2.       | Star Pattern    |



=======================================================================================

## NUMBER PATTERN📄
 * ### Pattern_1 [Pascal Triangle]:
 ![pascal](https://user-images.githubusercontent.com/87390353/135294713-6f11bdb1-34ad-47ec-9a5c-3181528fe377.jpg)
 
 ### Code:
 ``` 
 #include<stdio.h>
int main()
{
    int i,j,num=1,n,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);    
    for (i=0;i<n;i++){  
        for (k=i;k<n;k++){ 
            printf("  ");
        }
        for (j=0;j<=i;j++){ 
            if (j==0||i==j)
                num=1;
            else
                num=num*(i-j+1)/j;
        printf("   %d",num); 
        }
        printf("\n");
    } 
    return 0;
 }
 ```
 --------------------------------------------------------------------------------------

 * ### Pattern_2:
![num2](https://user-images.githubusercontent.com/87390353/135296627-9c64d253-916a-4651-95f9-00311d8675c3.jpg)
### Code:
```
#include<stdio.h>
void main()
{int i,k,j;
for(i=1;i<=4;i++)
  {k=i;
  
for(j=1;j<=7;j++)
 {
if(j>=5-i&&j<=3+i)
    {
        printf("%d",k);
        j<4?k++:k--;
    }
    else
        printf(" ");
 }
        printf("\n");
  }
}
```














### Hope these problems will help you😁.
