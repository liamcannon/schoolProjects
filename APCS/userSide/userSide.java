// lcannon

import java.util.Scanner;

public class userSide
{
   public static void main(String[] args)
   {
      Scanner kb = new Scanner(System.in);
      
      System.out.println(" How many sides you want vro?");
      int sides = kb.nextInt();
     
      System.out.println(" How many times do you want to roll the die?");
      int rolls = kb.nextInt();
      
      for(int count = 0; count <= rolls; count++)
      {
         int dieOne = 1 + (int)((sides+1) *Math.random());
         
         
         System.out.println("You rolled a " + dieOne);
      }
   
   }
}