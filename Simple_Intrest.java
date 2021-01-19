import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner inp= new Scanner(System.in);
        int p,r,t;
        System.out.println("Enter Principal");
        p=inp.nextInt();
        System.out.println("Enter Rate");
        r=inp.nextInt();
        System.out.println("Enter Time");
        t=inp.nextInt();
        System.out.println("SI is"+(p*r*t)/100);
    }
}
