class Prince<T>{
	T ob;
	Prince(T ob){
	//print the object
	System.out.println("OB = " + ob);
	//print the type of the object
	System.out.println("Type of OB = " + ob.getClass().getName());
	}
}

public class Main{
	public static void main(String[] args){
		Prince<Integer> o = new Prince<Integer> (88);
		Prince<String> y = new Prince<String> ("Prince");
	}
}