package guvi;
import java.util.*;
class multiplication
{
	private int m,n;
	public void accept()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the numder");
		m=sc.nextInt();
	}
	public void showtable()
	{
		for(n=0;n<=10;n++)
			System.out.println(m+" X "+n+" = "+m*n);
	}
}
public class Table {

	public static void main(String[] args) {
	multiplication m = new multiplication();
	m.accept();
	m.showtable();

	}

}
