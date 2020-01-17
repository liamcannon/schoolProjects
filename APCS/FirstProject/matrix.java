/* lcannon
   19/9/18
*/

import java.util.Scanner;

public class matrix
{
   public static void main(String[] args)
   {
   Scanner reader = new Scanner(System.in);
   // getting all the variables
   System.out.println("Enter the top left Variable");
   double topLeft = reader.nextDouble();
   System.out.println("Enter the top right Variable");
   double topRight = reader.nextDouble();
   System.out.println("Enter the bottom left Variable");
   double bottomLeft = reader.nextDouble();
   System.out.println("Enter the bottom right Variable");
   double bottomRight = reader.nextDouble();
   // algorithm for multiplying the variables and getting the final answer
   double solution = (topLeft*bottomRight) - (topRight*bottomLeft);
   
   System.out.println("The solution is " + solution);
   
   }
}