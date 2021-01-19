import java.util.Scanner;
public class SimpleIntrest
{
    public static void main(String[] args)
    {
        Scanner inp= new Scanner(System.in);
        int principal,rate,t;
        System.out.println("Enter Principal");
        principal=inp.nextInt();
        System.out.println("Enter Rate");
        r=inp.nextInt();
        System.out.println("Enter Time");
        t=inp.nextInt();
        System.out.println("SI is"+(principal*r*t)/100);
    }
}
