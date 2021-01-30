import java.util.Scanner;
public class MultiplicationTable{
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        int number,i;
        System.out.println("Enter the Number of which the table is to be printed: ");
        number=inp.nextInt()
        for(i=1;i<=10;i++)
        System.out.println(number+" * "+i+" = "+(number*i));
    }
}
