/*
The code is written in C++
Difficulty : Hard
Type :Recursion


Explanation:
Four different vectors have been made, named 'singles','tens','hundreds','Billion'
singles take care of all the digitd when they come to ones places
tens take care of all the numbers betweeen 11-20
hundred takes care of all the number <100 which are divisible by 10
Billion vector represent the status of the three set number.

The 'print' function basically converts the whole vecotr into a string and reutrn that string.
The 'Helper' function is the main function which is call repeatedly, returns the string if the number is less than 1000 or recursively 
call itself, while increasing the 'Index' ,which defines the degree of the number, ('Index' represents the index of the Billion vector).

*/


class Solution{

public:
/* differnt required vectors initialized */
 vector <string> singles{"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
 vector <string> tens{"And","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
 vector <string> hundreds{"Zero","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
 vector <string> Billion{"Hundred","Thousand","Million","Billion"};  
  
 /* Index variable declared globally*/
  int Index;
  
  /* Starting of function print */
  string print(vector <string> vect)
  {
    string Answer;
    for (int i = 0; i < vect.size(); i++)
    {
      Answer += vect[i];
      if (i != (vect.size()-1))
      {
        Answer += " ";
      }
    }
    return Answer;
  }
  
  /*Starting of Helper function */
  string Helper (int num)
  {
    /*The helper function is made to given correct English word, to a max of three digit this is called recursively to get all the English Words of a number >3 digits */
    vector <string> answer;
    if (num < 1000)
    {
      if (num/100 >0)
      {
        answer.push_back(singles[num/100]);
        answer.push_back(Billion[0]);
        if (num % 100 ==0)
        {
          return print(answer);
        }
      }
      num %= 100;
      if (num%10 == 0)
      {
            num /= 10;
            answer.push_back(hundreds[num]);
            return print(answer);
      }
      if (num/10 == 1)
      {
            answer.push_back(tens[num%10]);
            return print(answer);
      }
      else
      {
        if (num/10 > 1)
        {
          answer.push_back(hundreds[num/10]);
          num %= 10;
        }
        answer.push_back(singles[num]);
        return print(answer);
      }
    }

/*
divido get the number which excludes all the first three digits
modulo gets all the first three digits number,
Both modulo and divido are recursively called by helper function, and the helper function gives a string when a three digits or less than three digit number is given. 
*/
    int divido = num/pow(1000,Index);
    int modulo = num%int(pow(1000,Index));
    if (modulo == 0)
      return Helper(divido) +" " + Billion[Index--];
    else
    {
      return Helper(divido) +" " + Billion[Index--] + " " + Helper(modulo);
    }
  }

    string numberToWords(int num)
    {
      Index= (to_string(num).size()-1)/3 ;
      return Helper(num);
    }
};
