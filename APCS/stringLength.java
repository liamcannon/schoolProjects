//lcannon

import java.util.Scanner;

public class stringLength
{
   public static void main(String[] args)
   {
      Scanner scn = new Scanner(System.in);
      
      int space = 0;
      String input = scn.nextLine();
      
      for (int x = 0; x< input.length(); x++)
      {
         if(input.charAt(x) == ' ')
         {   
          space ++;
         } 
      }
      if(space+1 == 1)
      {
         System.out.println(space + 1 + " word");
      }
      else
      {
         System.out.println(space + 1 + " words");
      }
   }

}