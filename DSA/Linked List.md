<h1 align='center'>Linked List</h1>
<p>Linked list data structure is use to organize that data when we want to work with an unknown number of data values. The linked list is a linear data structure that contains a sequence of elements such that each element links to its next element in the sequence. Each element in a linked list is called "Node".</p>
<p>It includes a series of connected nodes. In which each node store the data and the address of the next node.</p> 
<div align='center'>
  <img src="https://www.alphacodingskills.com/imgfiles/linked-list.PNG">
</div>  
<p>You have to start somewhere, so we give the address of the first node a special name called HEAD. Also, the last node in the linked list can be identified because its next portion points to NULL.</p>
<h2 align='center'>Types of Linked List</h2>
<ul>
  <li><b>Singly Linked List</b>: can be traversed only in forward direction.</li>
  <li><b>Doubly Linked List</b>: can be traversed in forward and backward directions.</li>
  <li><b>Circular Singly Linked List</b>: Last element contains link to the first element as next.</li>
  <li><b>Circular Doubly Linked List</b>: Last element contains link to the first element as next and the first element contains link of the last element as previous.</li>
</ul>
<h3>Things to keep in mind when we are using Linked List</h3>
<ul>
  <li><b>head</b> points to the first node of the linked list</li>
	<li><b>next</b> pointer of the last node is <b>NULL</b>, so if the next current node is <b>NULL</b>, we have reached the end of the linked list.</li>
</ul>
<h2 align='center'>Linked List Operations</h2>
<ul>
  <li><b>Traversal</b>- access each element of the linked list</li>
	<li><b>Insertion</b>- adds a new element to the linked list</li>
	<li><b>Deletion</b>- removes the existing elements</li>
</ul>
<h2>1.Traverse a Linked List</h2>
<p>Displaying the contents of a linked list is very simple. We keep moving the temp node to the next one and display its contents.
When temp is NULL, we know that we have reached the end of the linked list so we get out of the while loop.</p>
<pre>
<code>
  struct node *temp = head;
  printf("\n\nList elements are - \n");
  while(temp != NULL)
  {
  printf("%d --->",temp->data);
  temp = temp->next;
  }
</code>
</pre>
<h2>2.Insertion of Elements to a Linked List</h2>
<ul>
  <li><b>Insert at the beginning</b></li>
  <pre>
  <code>
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }
  </code>
  </pre>
  <li><b>Insert at the End</b></li>
  <pre>
  <code>
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
	 head = newNode;
   else
   {
      struct Node *temp = head;
      while(temp->next != NULL)
	    temp = temp->next;
      temp->next = newNode;
   }
  </code>
  </pre>
  <li><b>Insert at the Middle</b></li>
  <pre>
  <code>
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      struct Node *temp = head;
      while(temp->data != loc1 && temp->data != loc2)
	    temp = temp->next;
      newNode->next = temp->next;
      temp->next = newNode;
   }
  </code>
  </pre>
</ul>
<h2>3.Delete from a Linked List</h2>
<ul>
  <li>Delete from beginning</li>
  <pre>
  <code>
    if(head == NULL)
	  printf("\n\nList is Empty!!!");
    else
    {
      struct Node *temp = head;
      if(head->next == NULL)
      {
	 head = NULL;
	 free(temp);
      }
      else
      {
	 head = temp->next;
	 free(temp);
      }
   }
  </code>
  </pre>
  <li>Delete from end</li>
  <pre>
  <code>
   if(head == NULL)
   {
      printf("\nList is Empty!!!\n");
   }
   else
   {
      struct Node *temp1 = head,*temp2;
      if(head->next == NULL)
	    head = NULL;
      else
      {
	    while(temp1->next != NULL)
	    {
	    temp2 = temp1;
	    temp1 = temp1->next;
	    }
	    temp2->next = NULL;
      }
      free(temp1);
      printf("\nOne node deleted!!!\n\n");
  }
  </code>
  </pre>
  <li>Delete from middle</li>
  <pre>
  <code>
  struct Node *temp1 = head, *temp2;
  while(temp1->data != delValue)
  {
  if(temp1 -> next == NULL){
	printf("\nGiven node not found in the list!!!");
	goto functionEnd;
  }
     temp2 = temp1;
     temp1 = temp1 -> next;
  }
  temp2 -> next = temp1 -> next;
  free(temp1);
  printf("\nOne node deleted!!!\n\n");
  functionEnd:
  </code>
  </pre>
</ul>  
