//lcannon
//sypher

import java.util.Scanner;

public class sypher{

   public static void main(String[] args){
   
      Scanner scn = new Scanner(System.in);
      System.out.println("Enter the phrase you want decoded/encoded");
      String phrase = scn.nextLine();
         phrase = phrase.toLowerCase();
      System.out.println("Enter the shift you want");
      int shift = scn.nextInt();
      System.out.println("1 for Encode, 2 for Decode");
      int choice = scn.nextInt();
      
      if(choice == 1)
      {
         SypherIn(phrase, shift);
      }
      if(choice == 2)
      {
         SypherIn(phrase, shift*-1);
      }
   }
   
   public static String SypherIn(String input, int shift)
   {
      String answer = "";
      int length = input.length();
      
      
      for(int x = 0; x < length; x++)
      {
         char replace = (char)((int)input.charAt(x) + shift);
         answer = answer + replace;  
          
      }
      System.out.println(answer);

      return answer;
   }
}