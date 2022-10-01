import java.math.BigInteger;
import java.util.Scanner;


public class Pblm_10106_Product {

	public static void main(String[] args) {
		Scanner input= new Scanner(System.in);
		BigInteger x,y;
		while(input.hasNext()){
			x=input.nextBigInteger();
			y=input.nextBigInteger();
			System.out.println(x.multiply(y));
		}
		

	}

}
