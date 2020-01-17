// lcannon

import java.util.Scanner;

public class palendrom
{
   public static void main(String[] args)
   {
      Scanner scn = new Scanner(System.in);
      
      System.out.println("Enter your word");
      String input = scn.nextLine();
      boolean trueFalse = palendromic(input);
      System.out.println(trueFalse);
      
   }
   
   public static boolean palendromic(String word)
   {
   
   String fnl = "";
      
   
      for(int x = 0; x < word.length(); x++)
      {
         int ret = (word.length()-x)-1;
         
         fnl = fnl + word.charAt(ret);
      }
      
      return word.equals(fnl);
   }  
}