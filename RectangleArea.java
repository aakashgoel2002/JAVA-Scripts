import java.util.Scanner;
public class RectangleArea{
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        int length,breadth;
        System.out.println("Enter Length: ");
        length=inp.nextInt();
        System.out.println("Enter Breadth: ");
        breadth=inp.nextInt();
        System.out.println("Area of Rectangle: "+(length*breadth));
    }
}
