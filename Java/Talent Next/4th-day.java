class Employee extends Object ()
class Manager extends Employee ()
class Director extends Manager ()
public class Test_Multi_Level_Inheritance
{
	public static void salary (Object obj)
	{
		if (obj instanceof Director)
		System.out.println ("Director Salary 30000$");
		elseif (obj instanceof Manager)
		System.out.println ("Manager Salary 20000$");
		else if (obj instance of Employee)
		System.out.println ("Employee Salary 10000$");
		else System.out.println ("Invalid");
	}
}