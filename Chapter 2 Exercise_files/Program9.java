import java.util.*;

class Program9{

	public static void main(String args[]){
			
		Scanner sc = new Scanner(System.in);

		int a,b,c,d, sum1, sum2;
		System.out.println("Enter first fraction for addition:");
		a = sc.nextInt();
		b = sc.nextInt();

		System.out.println("Enter second fraction for addition:");
		c=sc.nextInt();
		d=sc.nextInt();
		sum1 = (a*d)+(b*c);
		sum2 = b*d;
		System.out.println("Sum of two fraction is: " +sum1+"/" +sum2);
	}
}