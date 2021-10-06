public class StringPool {

    /**
     * Java String Pool example
     
     */
    public static void main(String[] args) {
        String s1 = "Hello";
        String s2 = "Hello";
        String s3 = new String("Hello");
        
        System.out.println("s1 == s2 :"+(s1==s2));
        System.out.println("s1 == s3 :"+(s1==s3));
    }

}

/*  output 
	s1 == s2 :true
	s1 == s3 :false
*/