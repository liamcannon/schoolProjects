//lcannnon
import java.util.Scanner;
public class nim
{
   public static void main(String[] args)
   {
      Scanner input = new Scanner(System.in);
      System.out.println("The Rules of the game are as follows");
      System.out.println("You may pick up to half of the current pile of numbers");
      System.out.println("The point of the game is to not take the last number");
     
      System.out.println("Game Size?");
      int gameSize = input.nextInt();

      System.out.println("1 for Player Vs. Player and 2 Player Vs. Computer");
      int gameMode = input.nextInt();
      if(gameMode == 1)
      {
         System.out.println("Choose who will be player1 and player2");
         int playerTurn = 0; 
         boolean done = false;
         
         while(done == false )
         {
            if(playerTurn == 0)
            {
               System.out.println("Player 1's turn, pick a number");
               int userPick = input.nextInt();
               gameSize = calculation(userPick, gameSize);
               System.out.println("The new total is " + gameSize);
               playerTurn++;
               if(gameSize == 1)
               {
                  System.out.println("Player 2 wins!");
                  done = true;
               }
            }
            else if(playerTurn == 1)
            {
               System.out.println("Player 2's turn, pick a number");
               int userPick = input.nextInt();
               gameSize = calculation(userPick, gameSize);
               System.out.println("The new total is " + gameSize);
               playerTurn--;
               if(gameSize == 1)
               {
                  System.out.println("Player 1 wins!");
                  done = true;
               }
            }
         }
      }
      if(gameMode == 2)
      {
       System.out.println("Would you like to go first or second");
       String position = input.nextLine();
       boolean done = false;
       
       while(done2 == false)
       {   
       if(position.equalsIgnoreCase("y"))
         {
            while(gameSize > 1)
            {
               int turn = 0;
               System.out.println("The current total is" + gameSize);
               System.out.println("Pick a number to take away from the total");
               int pick = input.nextInt();
               
               calculation(pick, gameSize);
          }
         }
         else if(position.equalsIgnoreCase("n"))
         {
            while(gameSize > 1)
            { 
               
            }
         }
       }
    }  
   }//end of main
  public static int calculation(int playerGuess, int gameSize)
  {
      if(playerGuess > (gameSize/2))
      {
         playerGuess = (gameSize/2);
         gameSize = gameSize-playerGuess;
         return gameSize;
      } 
      else if(playerGuess <= (gameSize/2))
      {
         gameSize = gameSize-playerGuess;
         return gameSize;
      }
      else
         return gameSize;
  }// end of calculation method
  public static int computerCalc(int gameSize)
  {
      //need to get to 3 to win for computer   
  }
}