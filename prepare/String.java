class Test{
	int length; 
	int breadth; 
	int h;

	Test(int a, int b, int c){
		length = a;
		breadth = b;
		h = c;
	}

	String toString(){
		return "Prince is " + length + "lmao" + breadth + h;
	}
}

public class String{
	public static void main(String[] args){
		char alps[] = {'a', 'b', 'c', 'd'};
		String a = new String(alps);
		String b = new String("abcd");

		int r = b.length();
		char a = b.charAt(1);

		String g = b + "Prince Gautam";

		//toString demo
		Test t = new Test(1, 3, 4);
		String s = "Output = " + t;
		System.out.println(s);

		//getChars demo
		char[] buf = new char[size];
		a.getChars(start index of a, last index of a, target, starting index of target);
		a.getChars(1, 3, buf, 0);
		System.out.println(buf);

		//getBytes
		byte[] data = a.getBytes();

		//String comparison 
		a.equals(b);
		a.equalsIgnoreCase(b);

		boolean f = a.endsWith("ps");
		f = b.startsWith("a");

		f = a.equals(b); //returns true
		f = (a==b); //returns false

		a.indexOf(char) //searches for the position of first occurence of the element
		a.lastIndexOf(char) //searches for last position of the element

		//String modification 

		String x = a.substring(0,1);
		a.concat(x);

		a.replace(original char, replacement char);
		a.replace(original substring, replacement substring);
		a.trim() //removes all extra whitespaces in the string


		a.toUpperCase();
		b.toLowerCase();

		a.isEmpty();


		//StringBuffer functions
		sb.length();
		sb.capacity(); //total capacity at the present moment of the string builder

		sb.setLength();

		sb.setCharAt(index, char);

		sb.append(a).append(b).append(g);

		sb.insert(index, char);
		sb.insert(index, String);

		sb.reverse();

		sb.delete(startindex, endindex);

		sb.deleteCharAt(int index);

		sb.replace(start, end, String);

		StringBuffer fg = sb.substring(startindex, endindex);

		//About StringBuilder
		/* it is not synchronized, and it is not thread safe, 
		Advantage of String Builder is faster performance, 
	}
}