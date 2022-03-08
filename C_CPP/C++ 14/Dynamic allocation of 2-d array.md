   Dynamic allocation of 2D arrays      
 (Note :- We assume you know about how to dynamically allocate memory)
  
To create a 2D array in the heap memory, we use the following syntax:

Suppose we want to create a 2D array of size n x m, with the name of the array as ‘arr’:

            int **arr = new int*[n];
            for (int i=0; i < n; i++) {
            arr[i] = new int[m];
            }

You can see that first-of-all we have declared a pointer of pointers of size n and then at each pointer while traversing we allocated the array of size m using new keyword.

Similarly, we can release this memory, using the following syntax:

        for (int i=0; i < n; i++) {
        delete [ ] arr[i];  
        }
        delete [ ] arr;

First-of-all, we have cleared the memory allocated to each of the n pointers and then finally
deleted those n pointers also.
This way, using delete keyword, we can release the memory of the 2D arrays.