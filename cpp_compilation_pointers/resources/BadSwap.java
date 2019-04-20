public class BadSwap {
	public static void badSwap(Integer var1, Integer var2)
	{
		Integer temp = var1; // var1 reference is stored in temp
		var1 = var2; // var2 reference is stored in var1
		var2 = temp; // var1 reference from temp is stored in var2
		// Because all of the reference were copies outside nothing 
		// will change
		System.out.println("two: " + var2); // "one" (correct)
		// BUT method calls like "var2.set(100)" would change var1!
	}
	public static void main(String args[]){
		// We need integer objects not primitives
		Integer one = new Integer(100);
		Integer two = new Integer(200);
		System.out.println("swap " + one + " and " + two);
		badSwap(one, two);
		System.out.println("one: " + one + ", two: " + two);
	}
}