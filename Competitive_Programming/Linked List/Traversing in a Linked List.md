# Treaversing in a Linked List

<p> If you are new to **Linked List** not a issue first you have to learn about basic of **Linked List** then this discussion will be helpful for you. No worry I will discussed throughly about traversing in **Linked List** it may be reverse traversing or simple traversing from first to last element.</p>

## What is traversing ?
<p> In simple word traversing mean visiting each an every elements at once present in your set, for example of sets :- linked list,array,etc. In progmming world we used word traversing for this process. </p>

<p>Talking about traversing in your data structure that is Linked list is that we start from first Node or start Node or head Node and passing next Node address and till reach end of your List. Now you might have doubt about What is Node ?</p>

## What is Node ?
<p> Well Node is like userdefined data type . Node can be created by using structure in c and structure or class in c++ progmming languages. In Linked list we want Node which cointained two type of data members one for storing data and another is for storing address of next node.
<p>For example;-
  struct Node  //we create structure Node using struct keyword                                                                                                                   
  {
    int data; // for storing integer datatype
    Node next; //for storing address haveing Node datatype
  };  // semi-colon is compulsory which show end of structure </p>
