import java.util.*;
//import java.util.Map.Entry;


import java.io.*;
//import java.math.*;
//import static java.util.stream.Collectors.*;
//import static java.util.Map.Entry.*;

/* Name of the class has to be "Main" only if the class is public. */
public class BinaryExponentiation

{
  public static void main (String[] args) throws IOException
  {
    
    
      PrintWriter pt=new PrintWriter(System.out);
      BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
      

          { 
            String str=br.readLine();
            StringTokenizer st=new StringTokenizer(str," ");

             int n=Integer.parseInt(st.nextToken());

            int s=Integer.parseInt(st.nextToken());
            
            pt.println(Binexp(n,s));
        }
        pt.close();
    }
    public static int Binexp(int a, int b)
    { int temp=0;
      if(b==0)
      {
        return 1;
      }
      else if(b%2==0)
      {
        
        temp=Binexp(a,b/2)*Binexp(a,b/2);
        return temp;
      }
      else 
      {
        temp=Binexp(a,b/2)*Binexp(a,b/2)*a;
        return temp;
      }
    }
}
