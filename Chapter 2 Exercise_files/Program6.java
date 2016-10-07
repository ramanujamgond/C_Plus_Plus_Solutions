import java.util.*;

class Program6{

	public static void main(String args[]){
		
		Scanner sc = new Scanner(System.in);

		double dollars, US = 1.487, franc = 0.172, deus_m = 0.584, yen = 0.00955;
		System.out.print("Enter an amount in dollars:- $");
		dollars = sc.nextDouble();

		System.out.println("British Pound is equivalent to $ " + dollars*US);
		System.out.println("French Franc is equivalent to $ " + dollars*franc);
		System.out.println("German deutschemark is equivalent to $ " + dollars*deus_m);
		System.out.println("Japanese yen is equivalent to $ " + dollars*yen);
	}
}