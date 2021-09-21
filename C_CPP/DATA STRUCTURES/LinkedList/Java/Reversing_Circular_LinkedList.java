import java.util.*;

class Node
{
    public int data;
    public Node address;
    Node(int d) 
    {
        data = d;
        address = null;
    }
}

public class ReversingCircularLinkedList
{
    static Node start;
    static int size;

    ReversingCircularLinkedList()
    {
        start = null;
        size = 0;
    }

    static Node reverse(Node start) 
    {  
        Node previous = null; 
        Node current = start; 
        Node next; 
        do 
        { 
            next = current.address; 
            current.address = previous; 
            previous = current; 
            current = next; 
        } while (current != (start)); 
        
        (start).address = previous; 
        start = previous; 
        return start;
    }  

    public void create(Node node,int i) 
    {
        if (start == null)
        {
            start = node;
        }
        else 
        {
            Node temp = start;
            while (temp.address != null)
                temp = temp.address;
            temp.address = node;

            if(i == size-1)
            {
                temp.address.address = start;
            }
        }
    }

    void display()
    {
        Node temp = start;

        if(start == null)
        {
            System.out.println("List is empty");
            return;
        }

        temp = start;

        do 
        {
            System.out.print(temp.data + " ");
            temp = temp.address;
        } while (temp != start);
        System.out.println();
    }

    public static void main()
    { 
        Scanner scanner = new Scanner(System.in);

        ReversingCircularLinkedList ob = new ReversingCircularLinkedList();

        int data, i;

        System.out.println("Enter size of Circular Linkedlist: ");
        size = scanner.nextInt(); scanner.nextLine();

        for(i = 0; i < size; i++)
        {
            System.out.println("Enter data in Circular Linkedlist: ");
            data = scanner.nextInt(); scanner.nextLine();
            ob.create(new Node(data), i);
        }

        System.out.println("Original Circular LinkedList: "); 
        ob.display();

        start = reverse(start);

        System.out.println("Reversed Circular LinkedList: "); 
        ob.display(); 

    } 
}


/*Test Cases-
 Enter size of Circular LinkedList: 
 5
 Enter data in Circular LinkedList: 
 1
 Enter data in Circular LinkedList: 
 2
 Enter data in Circular LinkedList: 
 3
 Enter data in Circular LinkedList: 
 4
 Enter data in Circular LinkedList: 
 5
 Original Circular LinkedList: 
 1 2 3 4 5 
 Reversed Circular LinkedList: 
 5 4 3 2 1 
 
 Time Complexity: O(n) */