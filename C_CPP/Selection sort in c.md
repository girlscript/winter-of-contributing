## Selection Sort
<p>First, sorting means to arrange list of data elements in either increasing or decreasing order.So one of the techinques to sort a list of data elements is "Selection Sort".<p>
  <p>Let us first consider an array A with N elements.So, the data of N elements stored in memory is A[0],A[1]......A[N-1].
    In selection sort,we first find the smallest element and swap it with the element at first position i.e A[0],then we find the second smallest element and swap it with the element at second position
    i.e A[1] and this goes on.After (N-1) times swaps we get a sorted array A.<p>
   <p>Now lets see the algorithm<p>
     -1)Repeat steps for k=1 to N-1<p>
     -2)Repeat steps (3),(4) for LOC=0 to N-1<p>
     -3)Repeat steps (a) for LOCP=LOC+1 to N-1 Set min=A[LOC]<p>
          -a)If min> A[LOCP] then min=A[LOCP]
     -4)Now swap min and A[LOC] 
   
