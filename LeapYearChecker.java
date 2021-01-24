import java.util.Scanner;
public class LeapYearChecker{
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        int year,c;
        System.out.println("Enter the Year which is to be checked as a Leap Year: ");
        year=inp.nextInt();
        if(year%4==0)
        System.out.println(year+" is a Leap Year");
        else
        System.out.println(year+" is not a Leap Year") 
    }
}    
