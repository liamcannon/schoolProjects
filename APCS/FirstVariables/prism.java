/* lcannon
   finding the volume and surface area of any prism
   9/11/18
*/
import java.util.Scanner;

public class prism
{
   public static void main(String[] args)
   {
   Scanner reader = new Scanner(System.in);

   System.out.println(" Welcome, would you like calculate surface area or volume of a Rectangular Prism");
   System.out.println("1.) Surface Area");
   System.out.println("2.) Volume'");
   
   String answer = reader.nextLine();
  
   if (answer.equals("1")) 
   {
   System.out.println("Enter Height : ");
   double height = reader.nextInt();
   System.out.println("Enter Width: ");
   double width = reader.nextInt();
   System.out.println("Enter Length: ");
   double length = reader.nextInt();
   
   double surfacearea = 2*(width*length + height*length + height*width);
   System.out.println("Surface area = " + surfacearea);
   }
   else if (answer.equals("2"))
   {
   System.out.println("Enter Height : ");
   double height = reader.nextInt();
   System.out.println("Enter Width: ");
   double width = reader.nextInt();
   System.out.println("Enter Length: ");
   double length = reader.nextInt();
   // getting user input for the width height and length for prism
   
   double volume = height*width*length;
   
   System.out.println("Volume = " + volume);
   }
   else
   {
   System.out.println("Invalid");
   }
   
   }
  
  }

