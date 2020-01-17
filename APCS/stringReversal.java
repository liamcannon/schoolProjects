//lcannon

import java.util.Scanner;
import java.util.StringTokenizer;

public class stringReversal
{
   public static void main(String[] args)
   {
      Scanner scn = new Scanner(System.in);
      System.out.println("Enter a phrase");
      String phrase = scn.nextLine();
      
      System.out.println(palendromeString(phrase));
   }
   public static String palendromeString(String phrase)
   { 
      
      String newPhrase = ("");
      
      int stop = phrase.length();
      
      for(int i = phrase.length()-1; i > 0; i--)
      {
         if(phrase.charAt(i) == ' ')
         {
         
         newPhrase = newPhrase + phrase.substring(i, stop);
        

         }
         
         
      }
      return newPhrase;
   }
  
}