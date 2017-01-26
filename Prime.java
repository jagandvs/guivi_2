package guvi;
import java.util.*;
class PrimeNumber
{
	public int m,n,count=0;
	public void accept()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number");
		n = sc.nextInt();
	}
	/**
	 * 
	 */
	public void verify()
	{
		for(m=2;m<=n/2;m++)
		{
			if(n%m==0)
				count++;
		}
		if(count==0 && n!=0)
			System.out.println(n+" is a prime number");
		else
			System.out.println(n+" is not a prime number");
	}
}
public class Prime {

	public static void main(String[] args) {
		PrimeNumber p = new PrimeNumber();
		p.accept();
		p.verify();
	}

}
