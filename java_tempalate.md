static class FastReader {
	BufferedReader br;
	StringTokenizer st;
	
	public FastReader()
	{
		br = new BufferedReader(
				new InputStreamReader(System.in));
	}
	
	String next()
	{
		while (st == null || !st.hasMoreElements()) {
			try {
				st = new StringTokenizer(br.readLine());
			}
			catch (IOException e) {
				e.printStackTrace();
			}
		}
		return st.nextToken();
	}
	
	int nextInt() { return Integer.parseInt(next()); }
	
	long nextLong() { return Long.parseLong(next()); }
	
	double nextDouble()
	{
		return Double.parseDouble(next());
	}
	
	String nextLine()
	{
		String str = "";
		try {
			str = br.readLine();
		}
		catch (IOException e) {
			e.printStackTrace();
		}
		return str;
	}
}
static void sort(char[] a) {
	int n = a.length;
	Random r = new Random();
	for (int i = 0; i < a.length; i++) {
		int oi = r.nextInt(n);
		char temp = a[i];
		a[i] = a[oi];
		a[oi] = temp;
	}
	Arrays.sort(a);
}
// --------------------------------------------------------------------------------------------------------------------------------//

public static void main(String[] args)throws IOException{try{boolean oj=true;if(oj==true)
{PrintWriter out=new PrintWriter(System.out);}
else
{out=new PrintWriter("output.txt");}
long T=L();while(T-->0)
{long startTime = System.currentTimeMillis();
process();
long endTime = System.currentTimeMillis();
pn("time taken:  "+(endTime-startTime));}out.flush();out.close();}catch(Exception e){return;}}}
//-----------------------------------------------------------------------------------------------------------------------------------//

//Fast Reader to read and scan input fastlly for 1 sec constraint
//Arrays.sort uses Quick sort which has a worst time complexity of O(n2) if the array is sorted so I randomized the element to get best result out of it
//Print Writer to get fast output
