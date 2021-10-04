#include<stdio.h>
#include<stdlib.h>


//Node represents a term of the Polynomial 
struct Node
{
    int coefficient;// stores the coeffcient 
    int exponent ; //exponent
    struct Node * link;//link to new Node
} typedef Node;

//Polynomial represents a polynomial , contains the pointer to the first Node of the polynomial list
struct Polynomial_List
{
    Node * start ;
}typedef Polynomial;


void insert_end( Polynomial* p , int coeff , int exp )
{
       
       Node * newNode = (Node*)malloc(sizeof(Node));
       newNode->coefficient = coeff;
       newNode->exponent = exp;
       newNode->link = NULL;
      
      if( p->start == NULL)  //for the insertion of the first node of the list (polynomial)
          p->start = newNode;
      else     //for general insertion of 2nd , 3rd,.. nodes
          {
                Node * temp = p->start;
                while( temp->link != NULL)
                   temp = temp->link;
                  
                temp->link = newNode;  
          }
          
}//end of insert_end


void display( Polynomial p)
{
     if( p.start == NULL )
      printf("\n Null Polynomial");
     else
      {
          Node * temp = p.start;
          printf("\n Polynomial is :  ");
          while( temp != NULL)
          {
              if(temp->coefficient < 0)
                printf(" %d", temp->coefficient);//print the coefficient
              else
                printf(" +%d", temp->coefficient);//print the coefficient
              if( temp->exponent != 0 )printf("X%d", temp->exponent);//print X only when the exponent is non zero
              
              temp= temp->link; //jump to next node
          }//end of while
      }
}//end of display function


void add_poly( Polynomial poly1, Polynomial poly2, Polynomial* result)
{
    Node * p = poly1.start; 
    Node * q = poly2.start;
   
    while( p != NULL && q!= NULL) // until one of the list(polynomial) is terminated
    {
          if( p->exponent == q->exponent)
          {
                 int c = p->coefficient + q->coefficient;//add the coefficients of both the terms 
                 
                 if( c != 0 )//if the sum coefficient is non zero
                  {
                        Node * newNode = (Node*)malloc(sizeof(Node));//get a new node for result poly
                        newNode->coefficient = c; //set coefficient
                        newNode->exponent = p->exponent; //set exponent
                        insert_end(result,c,p->exponent);//add the term in the result poly
                        p = p->link; //move forward in both the lists
                        q = q->link;
                  }
                  else // if c is 0 , then the term cancels out
                     {
                           p = p->link; // skip these current nodes  from both the list
                           q = q->link;
                     }       
                 
                
          }// if same exponent
          else  
           {
                //different exponent
               if ( p->exponent > q->exponent)
            {
                        Node * newNode = (Node*)malloc(sizeof(Node));
                        newNode->coefficient = p->coefficient;
                        newNode->exponent = p->exponent;
                        insert_end(result,p->coefficient,p->exponent);
                        p = p->link;
            }
            else
            {
                        Node * newNode = (Node*)malloc(sizeof(Node));
                        newNode->coefficient = q->coefficient;
                        newNode->exponent  = q->exponent;
                        insert_end(result,q->coefficient,q->exponent);
                        q = q->link;
            }
           
                       
           }//end of else for different exponents
          
          
          
    }//end of while
    
    //copy remaining nodes from the Polynomial 
    
    if( p==NULL)// polynomial pointed by p does not have any more terms left
    {
          while(q!=NULL) //copy remaining nodes from q polynomial
          {
              insert_end(result,q->coefficient, q->exponent);
              q=q->link;//move q to the next node 
              
          }
          
    }
    else
    {
        while(p!=NULL)//copy from p Polynomial
          {
              insert_end(result,p->coefficient, p->exponent);
              p=p->link;
              
          }
          
    }
    
    
    
}//end of poly_add function

int main(void)
{
   Polynomial p,q, result;
   p.start = NULL;
   q.start = NULL;
   result.start = NULL;
   
    insert_end(&p, 5,4); //5x4
    insert_end(&p, -2,3);// -2x3
    insert_end(&p,-2,1); // -2x
    insert_end(&p,4,0); // 4 
    display(p);  // p(x) =   5x4 - 2x3 -2x + 4
 
    insert_end(&q, 7,2); //7x2
    insert_end(&q,-4,0); // -8x
    display(q);// q(x) = 7x2 - 8x
   
   
 
   add_poly( p,q,&result);
   display(result);  // Q = 5x4 - 2x3 + 7x2 -10x + 4
 
}//end of main
