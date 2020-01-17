//lcannon

import java.util.Scanner;

public class AlphabetArray
{
   public static void main(String[] args)
   {
      Scanner scn = new Scanner(System.in);
      System.out.println("Enter your sentence");
      String sentence = scn.nextLine();
      sentence = sentence.toUpperCase();
      
      int[] alphabet = new int[26];// array for legth of alphabet
      
      for(int x = 0; x < sentence.length(); x++)
      {
         if(sentence.charAt(x) != 32)// 32 is a space just ignores spaces
         {
            char letterAt = sentence.charAt(x);
            int ascii = ((int)letterAt)-65;// letterAt casted as int gives the ascii value. -65 gives us the alphabet value
            alphabet[ascii] = alphabet[ascii]+1;
         }
      }
      
      int count = 0;  // counting the amount of times we go through the loop this makes it so we can print the alphabet with the number
        
      for(int num : alphabet)
      {
         if(num != 0)// making it so it only prints the letters that are used and the correlating use of said letters
         {
            System.out.print(num);
            System.out.println(" "+(char)(count+65));
         }
         count++;
         
      }
      
      

   }
}