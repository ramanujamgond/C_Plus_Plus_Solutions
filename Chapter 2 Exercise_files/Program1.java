/* Converts gallons to cubic feet. */

import java.util.*;

class Program1 {

	public static void main(String args[]){


		double gallons,cufeet;

		Scanner sc= new Scanner(System.in);

		gallons = sc.nextDouble(); // take input

		cufeet = gallons / 7.481;

		System.out.println("Equivalent in Cubic Feet is: "+ cufeet);

	}
}