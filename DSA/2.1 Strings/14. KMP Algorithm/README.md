# KMP (Knuth–Morris–Pratt) Algorithm 📝
To understand the KMP algorithm we first need to understand the construction of the Longest Proper Prefix Suffix Array.
### What is a Longest Proper Prefix Suffix Array? 
It is an array which which consists of the longest lengths of the proper prefixes which are also a suffix from index 0 to n. Here n refers to length of given string.
<br>
#### Let us consider this string as an example "abaac"
The list of proper prefixes are: *"","a","ab","aba","abaa"*<br>
The list of suffixes are: *"","c","ac","aac","baac","abaac"*<br>
>**NOTE: "abaac" is a prefix of "abaac" ,but not a proper prefix**
<br>

#### Now let us construct the LPS array using KMP search. This method of constructing an LPS array is far more efficient than the naive method of constructing an LPS array.
The LPS array for _“abaac”_ is _00110_<br>
>* For the first character, the longest length of LPS is always going to be **0**. <br>
>* For the second character **b**, the longest length is **0** as characters **a** and **b** do not match.<br>
>* For the third character **a**, the longest length of LPS is **1** as **a** is a proper prefix and **a** is also a suffix.<br>
>* For the fourth character **a**, the longest length of LPS is **1**  as **a** is a proper prefix and **a** is also a suffix.<br>
>* For the fifth character **c**, the longest length of LPS is **0**.<br>
![1](https://user-images.githubusercontent.com/88573135/136436458-47503a48-bc15-433c-a6c7-5d1ed0376279.png)


#### To understand the LPS array better let's look at this another example string, _“aabcaab”_. 
It's LPS array is _0100123_
</br>
>* For the first character, the longest length of LPS is always going to be **0**.<br>
>* For the second character **a**, the longest length is 1 as as **a** is a proper prefix and **a** is also a suffix.<br>
>* For the third character **b**, the longest length of LPS is **0**.<br>
>* For the fourth character **c**, the longest length of LPS is **0**.<br>
>* For the fiftth character **a**, the longest length of LPS is **1**  as **a** is a proper prefix and **a** is also a suffix.<br>
>* For the sixth character **a**, the longest length of LPS is **2**  as **aa** is a proper prefix and **aa** is also a suffix.<br>
>* For the seven character **b**, the longest length of LPS is **3**  as **aab** is a proper prefix and **aab** is also a suffix.<br>
![2](https://user-images.githubusercontent.com/88573135/136436712-849f1ffa-eb96-48e4-ba9e-3dcb97866602.png)


#### Now that we understand how to determine the longest proper prefix suffix array, let us see how we can implement the construction of LPS in CPP. The implementation is a bit tricky, it uses the information of the length of previous LPS to determine LPS  of later strings.
#### Steps of Algorithm:
> 1. The **constructLPS** function in our code takes a string and LPS array and size of string as input arguments and fills up the LPS array.<br>
> 2. We initialize **LPS[0]** as 0 as I mentioned before.<br>
> 3. Then we run a while loop,till i reaches value n.<br>
> 4. Inside the while loop,<br>
> **Case 1)**<br>
> If **strng[i]** and **strng[length]** matches ,we increment length by 1 and set the value of **LPS[i]** as that length.<br>
>**Case 2)** <br>
> But if **strng[i]** is not equal to **strng[length]**, we have 2 if cases<br>
> **a)** if length is equal to 0, we make **LPS[i]=0**<br>
> **b)** if the length is not 0, we change the length to **LPS[length-1]**, until we see a match(Case 1 or till length becomes 0(Case 2.a)<br>

## Code:<br>
```cpp
#include <bits/stdc++.h>
using namespace std;
void constructLPS(string strng, int *LPS, int n)
{
    int length = 0;
    LPS[0] = 0;
    int i = 1;
    while (i < n)
    {
        if (strng[i] == strng[length])
        {
            length++;
            LPS[i] = length;
            i++;
        }
        else
        {
            if (length == 0)
            {
                LPS[i] = 0;
                i++;
            }
            else
                length = LPS[length - 1];
        }
    }
}

int main()
{
    string strng = "abaac";
    int n = strng.length();
    int LPS[n];
    constructLPS(strng, LPS, n);
    cout << "The LPS is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << LPS[i] << " ";
    }

    return 0;
}
```
## Output:<br>
The LPS is:
0 0 1 1 0  

## Time complexity:<br>
O(n) as we are doing a single traversal of the array<br>
## Space complexity:<br>
O(1)<br>
</br>
>## Now that we are done with the construction of LPS,we can start with the KMP algorithm. This algorithm helps to identify all occurrences of a pattern in a given string. 
>Lets take an example:
>_text = "aababc"_,
>_pattern = "ab"_<br>
![4](https://user-images.githubusercontent.com/88573135/136436971-91988357-f44d-47ef-81f3-8ac8d6a4ba8c.png)
![3](https://user-images.githubusercontent.com/88573135/136436889-546ee480-8720-48c0-a5e9-073c147702b3.png)

As we can observe pattern is found at index 1,3 of the text string.

## But how does KMP algorithm finds out all the occurences of a pattern in a text?
KMP Algorithm first constructs the lps array for a given string and then does the pattern searching.
#### Steps of Algorithm:
>In this algorithm we first intialize **i** and **j** as 0 and run a while loop till i becomes **n**<br>
>**Case 1)**<br>
>if **(pat[j] == txt[i])**<br>
>we increment both i  and curr, and move forward in both the strings<br>
>**Case 2)**<br>
>if j becomes equal to length of pattern, **pat==M** it means we have found the occurence of pattern in text and we print the starting index of pattern in the text.<br>
>We then make **j = LPS[j - 1]**<br>
>By doing this we are actually taking help from our constructed LPS array to find the next character in the pattern to match.<br>
>**Case 3)**<br>
>Now if pat[j] is not equal to txt[i]<br>
>if **j==0**  we do **i++** it means we were trying to match first character of pattern with some ith character of text<br>
>else we make **j = LPS[j - 1]**<br>

### All of these details can be overwhelming for someone who is learning KMP Algorithm for the first time, so let’s take example text and pattern to understand the algorithm in-depth. ✨
## Iteration i=0
![a](https://user-images.githubusercontent.com/88573135/136437123-46f2dcaa-655f-4851-bb8b-73d28d26a652.png)
## Iteration i=1
![b](https://user-images.githubusercontent.com/88573135/136437144-8b453601-1864-42ba-a0ff-1bbd77076764.png)
### Iteration i=1 (Continued...)
![c](https://user-images.githubusercontent.com/88573135/136437170-c3e64787-f1e5-4f0c-9a4d-1942ef3a8133.png)
## Iteration i=2
![d](https://user-images.githubusercontent.com/88573135/136437184-01b7139c-9df4-4402-a596-de61ca4f81a5.png)
## Iteration i=3 
![e](https://user-images.githubusercontent.com/88573135/136437217-74c13a0e-6f4f-4042-a09c-2cedd8aeff11.png)
## Iteration i=3 (Continued...)
![f](https://user-images.githubusercontent.com/88573135/136437261-b3ff04ae-211d-475b-b7a9-f7919ea503fd.png)
## Iteration i=4
![g](https://user-images.githubusercontent.com/88573135/136437275-773b9f7e-c786-435c-ad57-ae38d3b87305.png)
## Iteration i=5
![H](https://user-images.githubusercontent.com/88573135/136437293-6ce75489-106c-4882-beb8-a777516f4a9b.png)
## Iteration i=5 (Continued...)
![i](https://user-images.githubusercontent.com/88573135/136437390-79c21a72-f212-40ba-804a-15197a42d1f0.png)
## Iteration i=6
![j](https://user-images.githubusercontent.com/88573135/136437393-ad7f6406-7084-41a3-844d-f16e0c7ce832.png)
## Code:<br>
```cpp
#include <bits/stdc++.h>
using namespace std;
void KMP(string pat, string txt, int LPS[], int M, int N)
{
    int i = 0, j = 0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            i++;
            j++;
        }

        if (j == M)
        {
            cout << "The pattern " << pat << " is found at index: " << i - M << endl;
            j = LPS[j - 1];
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j == 0)
                i++;
            else
                j = LPS[j - 1];
        }
    }
}
void constructLPS(string strng, int *LPS, int n)
{
    int length = 0;
    LPS[0] = 0;
    int i = 1;
    while (i < n)
    {
        if (strng[i] == strng[length])
        {
            length++;
            LPS[i] = length;
            i++;
        }
        else
        {
            if (length == 0)
            {
                LPS[i] = 0;
                i++;
            }
            else
                length = LPS[length - 1];
        }
    }
}
int main()
{
    string txt = "aababc", pat = "ab";
    int N = txt.length();
    int M = pat.length();
    int LPS[M];
    constructLPS(pat, LPS, M);
    KMP(pat, txt, LPS, M, N);
    return 0;
}
```
## Output:<br>
The pattern ab is found at index: 1<br>
The pattern ab is found at index: 3<br>
## Time complexity:<br>
O(n)<br>
## Space complexity:<br>
O(m)<br>
Here n is the length of text string, and m is the length of the pattern string.<br>
<br>
</br>
This is all that you need to know to get started with KMP Algorithm. Happy Learning! ❤️
