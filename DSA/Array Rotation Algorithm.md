<h1 align="center">Reversal algorithm for array rotation 📝</h1>
<p align="center">In this algorithm, subarrays are created and reversed to perform the rotation of the array.</p>
<h3>Example : </h3>
<pre>
Input  : arr[] = [7, 2, 6, 1, 0, 4]
         m = 1
Output : arr[] = [2, 6, 1, 0, 4, 7] 
</pre>
<p>
  <img src="https://static.javatpoint.com/core/images/array-rotation-in-java.png" alt="Arrays" width="700" height="400">
</p>
<h3>Algorithm : </h3>
<p>Lets suppose we have to rotate arr[] of size n by m elements. </p>
<pre>
rotate(arr[], m, n)
reverse(arr[], 1, m) ;
reverse(arr[], m + 1, n);
reverse(arr[], 1, n);
</pre>  
<h4>Let suppose AB are the two parts of the input array where A = arr[0..m-1] and B = arr[m..n-1]. The idea of the algorithm is :</h4>
<ul>
  <li>Reverse A to get ArB, where Ar is reverse of A.</li>
  <li>Reverse B to get ArBr, where Br is reverse of B.</li>
  <li>Reverse all to get (ArBr) r = BA.</li>
</ul>  
<h4>Example : </h4>
<p>Let the array be</p>
<pre>arr[] = [1, 2, 3, 4, 5, 6, 7]
m =2 and n = 7 
A = [1, 2] and B = [3, 4, 5, 6, 7] 
</pre>
<ul>
  <li>Reverse A, we get ArB  = [2, 1, 3, 4, 5, 6, 7]</li>
  <li>Reverse B, we get ArBr = [2, 1, 7, 6, 5, 4, 3]</li>
  <li>Reverse all, we get (ArBr)r = [3, 4, 5, 6, 7, 1, 2]</li>
</ul>  
