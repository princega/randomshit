class Prince<T>{
	T ob;
	Prince(T ob){
	//print the object
	System.out.println("OB = " + ob);
	//print the type of the object
	System.out.println("Type of OB = " + ob.getClass().getName());
	}
}

class GenMethods{
	static <T> void printarr(T[] arr){
		System.out.println("Type = "+ arr.getClass().getComponentType().getName());
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i] + " ");
		}
	}
}

public class Main{
	public static void main(String[] args){
		Prince<Integer> o = new Prince<Integer> (88);
		Prince<String> y = new Prince<String> ("Prince");
		GenMethods g = new GenMethods();
		int[] arr = {67, 32, 45, 78, 21};
		char[] arr2 = {'a', 'b', 'c', 'd'};
		g.printarr(arr);
		g.printarr(arr2);
	}
}