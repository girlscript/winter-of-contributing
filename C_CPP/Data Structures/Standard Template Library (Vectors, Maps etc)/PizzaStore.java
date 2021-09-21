/*
 * @author 
 * Suvraneel Bhuin
 */


////////////////////////////////Pizza Store
public abstract class PizzaStore {
	String style, type;
	public Pizza orderPizza(String style, String type) {
		Pizza pizza;
		pizza = createPizza(type);
		pizza.prepare();
		pizza.bake();
		pizza.cut();
		pizza.box();
		return pizza;
	}
	public void setPreference(int choice) {}
	public void orderMenu() {}

	protected Pizza createPizza(String type)
	{
		if (type.contentEquals("Chicken"))
			return new ChickenPizza();
		else if (type.contentEquals("Paneer"))
			return new PaneerPizza();
		else
			return new CornPizza();
	}
	
	// other methods here
}


//////////////////////////////// PizzaStore1
class PizzaStore1 extends PizzaStore{

  @Override
  public void orderMenu() {
      System.out.println("\n\t Store 1 Menu");
      System.out.println("\t =============\n ");
      System.out.println("\t01. North Indian style Chicken Pizza");
      System.out.println("\t02. American style Corn Pizza");
      System.out.println("\t03. American style Paneer Pizza");
      System.out.println("\t04. Barbeque style Chicken Pizza");
	  System.out.println("\nEnter Choice =>\t");
  }

  @Override
  public void setPreference(int choice) {
      
      switch(choice) {
      case 1:
          style="North Indian";
          type="Chicken";
          break;
      case 2:
          style="American";
          type="Corn";     
          break;
      case 3:
          style="American";
          type="Paneer";    
          break;
      case 4:
          style="Barbeque";
          type="Chicken"; 
          break;
      default: System.out.println("\n\t Wrong Order Processed");
      }
  	}
}


//////////////////////////////// PizzaStore2
class PizzaStore2 extends PizzaStore{

	@Override
	public void orderMenu() {
		System.out.println("\n\t Store 2 Menu");
		System.out.println("\t =============\n ");
		System.out.println("\t1. North Indian style Chicken Pizza");
		System.out.println("\t2. American style Paneer Pizza");
		System.out.println("\t3. Barbeque style Corn Pizza");
		System.out.println("\nEnter Choice =>\t");
	}

	@Override
	public void setPreference(int choice) {
    
		switch(choice) {
		case 1:
			style="North Indian";
			type="Chicken";
			break;
		case 2:
			style="American";
			type="Paneer";   
			break;
		case 3:
			style="Barbeque";
			type="Corn";       
			break;
		default: System.out.println("\n\t Wrong Order Processed");
		}
	}
}


//////////////////////////////// PizzaStore3
class PizzaStore3 extends PizzaStore{

	@Override
	public void orderMenu() {
		System.out.println("\n\t Store 3 Menu");
		System.out.println("\t =============\n ");
		System.out.println("\t1. American style Paneer Pizza");
		System.out.println("\t2. Barbeque style Paneer Pizza");
		System.out.println("\t3. American style Corn Pizza");
		System.out.println("\nEnter Choice =>\t");
	}

	@Override
	public void setPreference(int choice) {
  
		switch(choice) {
		case 1:
			style="American";
			type="Chicken";
			break;
		case 2:
			style="Barbeque";
			type="Paneer";    
			break;
		case 3:
			style="American";
			type="Corn";     
			break;
		default: System.out.println("\n\t Wrong Order Processed");
		}
	}
}