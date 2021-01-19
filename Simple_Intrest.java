import java.util.Scanner;
public class SimpleIntrest
{
    public static void main(String[] args)
    {
        Scanner inp= new Scanner(System.in);
        int principal,rate,time;
        System.out.println("Enter Principal: ");
        principal=inp.nextInt();
        System.out.println("Enter Rate: ");
        rate=inp.nextInt();
        System.out.println("Enter Time(in months): ");
        time=inp.nextInt();
        System.out.println("Simple Intrest is: "+(principal*rate*time)/100);
    }
}
