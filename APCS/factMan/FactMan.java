import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class FactMan
{
   public static void main(String[] args)
   {
      Scanner input = new Scanner(System.in);
      System.out.println("Pick your gamemode");
      System.out.println("1 for computer and 2 for player");
      int gameMode = input.nextInt();
      System.out.println("What is the maximum number you would like to use");
      int max = input.nextInt();
      //making the array list for the numbers and filling it in the for loop below it
      ArrayList<Integer> array = new ArrayList<Integer>(max);
      for(int x = 1; x < max+1; x++)
      {
         array.add(x);
      }

      if(gameMode == 1)
      {
         System.out.println("you've selected player vs. computer");
         PlayerVsComputer(array, max, input);
      }
      if(gameMode == 2)
      {
         System.out.println("Sorry this version isn't available in the current patch");
      } 
      else
         System.out.println("Done");
    
      
   }//end of main method
   
   public static int[] PlayerVsComputer(ArrayList<Integer> array, int max, Scanner input)
   {
      
      
      int playerTotal = 0;
      int computerTotal = 0;
      int count = 0;
      int choice;
      int hold = 0;
      
      
      while(array.size() > 0)
      {// player portion of the game getting the number user picks, factoring it, and updating scores
         if(count == 0)
       {
          System.out.println("Player's turn");
          System.out.println("Enter the number you want to pick");
          System.out.println(array);
          choice = input.nextInt();
          hold = choice + hold;
            
          computerTotal = factor(array, choice) + computerTotal;
          System.out.println("Your total is " + choice);
          System.out.println("The computers total is " + computerTotal);
                  
         
         
          count++;
       }
       if (count == 1)
         {
           System.out.println("Computers turn,");
          // find a number that maximizes computer point and minimize the players total
           for(int x = 0; x < max ; x++)
           {
               if(factor(array, x) == 0)
               {
                  computerTotal = computerTotal + x;
                  System.out.println("The computers total is now " + computerTotal);
                  playerTotal = playerTotal + factor(array, x);
                  System.out.println("Your total is now " + playerTotal);
               }// this section does not work but
           }
         count--;
       }
      }
           
      int[] playerTotals = {playerTotal, computerTotal};
      
      return playerTotals;
      
   }//end of PlayerVsPlayer Method
    public static int factor(ArrayList<Integer> array, int choice)
   {
      int total = 0;
//goes through each number up to the choice number 
        for(int x = 1; x < choice; x++)
        {
            if(choice % x == 0)
            {
               System.out.println(x + " is a factor of " + choice);
               total = x + total;
               int position = array.indexOf(x);
               array.remove(position);
            }
           
        }
        
        return total; 
        
   }// end of factor method
} 
   
