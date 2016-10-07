import java.util.*;

class Program7{

	public static void main(String args[]){

		Scanner sc=  new Scanner(System.in);
		float celsius;
		
		System.out.print("Enter the temperature in degree celsius: ");
		
		celsius = sc.nextFloat(); // take input

		float fahren = (celsius * 9/5)+32;
		System.out.println("Equivalent in Fahrenheit is: " + fahren);
	}
}