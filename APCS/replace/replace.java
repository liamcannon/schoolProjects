//lcannon

import java.util.Scanner;
import java.lang.*;


public class replace
{
   public static void main(String[] args)
   {
      Scanner scn = new Scanner(System.in);
      
      System.out.println("Enter your sentence || word");
      String input = scn.nextLine();

      System.out.println("What letter/word would you like to replace");
      String letter = scn.nextLine();
      
      System.out.println("What would you like to replace the letter/word with");
      String letter2 = scn.nextLine();
      
      String output = "";
      
      for (int x = 0; x < input.length(); x++)
      {
         if(Character.toString(input.charAt(x)).equalsIgnoreCase (letter))
         {
            output = output + letter2;
         }
         else
         {
            output = output + input.charAt(x);
         }
      }
      System.out.println(output);


   }
}