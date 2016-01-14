import java.math.BigInteger;
import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		BigInteger a, b;
		int cs,i;
		cs = sc.nextInt();
		for(i=1;i<=cs;i++)
		{
			a = sc.nextBigInteger().abs();
			b = sc.nextBigInteger().abs();
			if(a.mod(b).equals(BigInteger.ZERO))System.out.println("Case "+i+": divisible");
			else System.out.println("Case "+i+": not divisible");
		}

	}

}
