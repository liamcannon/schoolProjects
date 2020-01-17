//lcannon

import java.util.Scanner;

public class baseConversion
{
   public static void main(String[] args)
   {
      Scanner scn = new Scanner(System.in);
      System.out.println("Enter your number");
      String num = scn.nextLine(); 
      
      System.out.println("Enter the current base of the number");
      String originBase = scn.nextInt();
      
      System.out.println("Enter the base change");
      String changeBase = scn.nextInt();
      
   }
   
   public static int toDecimal(String num, String originBase)
   {
      int power = num.length()-1;
      int total = 0;
      
      int temp;
      
      for(int x = 0; x < num.length(); x++)
      {
         power--;
         temp = num.charAt(x);
         temp = Integer.parseInt(temp);
         int algorithm = (int)(temp*(Math.pow(originBase, power)));
         
         total = total + algorithm;  
      }
      System.out.println(total);
      return total;
   }
   //public static String fromBaseTen(String num, int changeBase)
  // {
     
   //}
}