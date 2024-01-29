import java.util.*; 
public class android {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List l =new ArrayList();
		//1 .these both are same but the difference is 2 u are giving specifcally
		//2 .that this list contains integer values so of no give that then it will give warning to it use  suggested    
		//suggest : List<Integer> l =new ArrayList();
		
		l.add(3);
		l.add(4);
		l.add(5);
		l.add(6);
		System.out.println(l.toString());
		//int z=l.get(0);
		//note this can"t also not done becoz arraylist get method gives object that not stored in integer mismatch and not print 
		System.out.println(l.get(1));
		//System.out.println(z);
		l.remove(2);
		System.out.println(l.toString());
		

	}

}
