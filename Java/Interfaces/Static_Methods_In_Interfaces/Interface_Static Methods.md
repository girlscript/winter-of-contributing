# Interfaces: A Recapitulation

- As you may already be knowing from the previous modules, interfaces are basically blueprints of a class, which can possess abstract methods having no *concrete* method body, along with variables. 

- The main objective is to gain the property of abstraction, which is essentially hiding the sophisticated details of an object's implementation and exposing only those which may be deemed necessary, in OOPS parlance.

- Another property that can be availed is that of multiple inheritance (Java doesn't allow direct implementation of it through ***extends*** keyword of classes).

---

#### Sample Interface:

`interface Music {`

 
 double vol, bass;
 public abstract void increaseVolume();
 void adjustBass(); //every method declared inside is public and abstract by default
 
 }`
 
 `public class Party implements Music {
 
 public static void main (String [] args)
 {
   public abstract void increaseVolume()
     {
        System.out.println("Increased!!");
       }
   void adjustBass()
   {
      System.out.println("Adjusted!!");
    }
  }
 }`
 
 
 








