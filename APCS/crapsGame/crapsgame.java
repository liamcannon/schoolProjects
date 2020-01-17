// lcannon

import java.util.Scanner;


public class crapsgame
{

   public static void main(String[] args)
   {
     for(int count = 1; count <= count; count++)
     {
      rolls();
      
         if(count = 1)
         {
            if(totatl == 7)
            {
               System.out.println("You rolled a 7, you win!");
            }
            else if(total == 11)
            {
               System.out.println("You rolled an 11, you win!");
            }
         else if(count = 1)
         { 
            if(total == 2 || total == 3 || total ==12)
            {
               System.out.println("You loose")
            }
         }  
         else 
         {
            int point = total;
            System.out.println("You rolled a" + total);
         }
         
         
         
     }
      
      
      
   }
   public static int rolls()
   {
       int die1 = 1 + (int)(7 *Math.random());
       int die2 = 1 + (int)(7 *Math.random());
       
       int total = die1 + die2;
    
       return total;
       
    
   }
 
}