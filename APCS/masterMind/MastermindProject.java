//lcannon
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
public class MastermindProject
{
   public static void main(String[] args)
   {
      Scanner input = new Scanner(System.in);
      System.out.println("Welcome to mastermind");
      System.out.println("Pick now who will be guessing and who will be picking the code");
   
      play();
   }//end of main
   public static void play()
   {
      Scanner input = new Scanner(System.in);//importing scanner again
      
      ArrayList<String> gameCode = new ArrayList<String>(4);
      
      String pos1;
      String pos2;
      String pos3;
      String pos4;
      
      System.out.println("The following colors are available: White, Blue, Green, Orange, Yellow, and Red");
      System.out.println("When inputting the code use the first letter of the color(lowercase)");
      do
      {
         System.out.println("1st color");
         pos1 = input.nextLine();
      }
      while(!("wbgoyr".contains(pos1)));
         gameCode.add(pos1);
      do
      {
         System.out.println("2nd color");
         pos2 = input.nextLine();
      }
      while(!("wbgoyr".contains(pos2)));
         gameCode.add(pos2);
      do
      {
         System.out.println("3rd color");
         pos3 = input.nextLine();
      }
      while(!("wbgoyr".contains(pos3)));
         gameCode.add(pos3);
      do
      {
         System.out.println("4th color");
         pos4 = input.nextLine();
      }
      while(!("wbgoyr".contains(pos4)));
         gameCode.add(pos4);
         
      ArrayList<String> guessList = new ArrayList<String>(4);
      String guess1;
      String guess2;
      String guess3;
      String guess4;
      
      for(int x = 0; x < 12; x++)
      {
         do
         {
            System.out.println("1st guess");
            guess1 = input.nextLine();
         }
         while(guess1.contains("wbgoyr"));
            guessList.add(guess1);
         do
         {
            System.out.println("2nd guess");
            guess2 = input.nextLine();
         } 
         while(guess2.contains("wbgoyr"));
            guessList.add(guess2); 
         do
         {
            System.out.println("3rd guess");
            guess3 = input.nextLine();
         }
         while(guess3.contains("wbgoyr"));
            guessList.add(guess3);
         do
         {
            System.out.println("4th guess");
            guess4 = input.nextLine();
         }
         while(guess4.contains("wbgoyr"));
            guessList.add(guess4);
            
         int redPins = 0;
         
         for(int z = 0; z < 4; z++)
         {
            if(gameCode.get(z).equals(guessList.get(z)))
            {
               redPins++;
               System.out.println(redPins + " reds");
               if(redPins == 4)
               {
                  System.out.println("Correct Code");
                  gameOver();
               }
            }
         }
         int pinTemp = 0;
         for(int y = 0; y < 4; y++)
         {
            if(gameCode.contains(guessList.get(y)))
            {
               pinTemp++;
               int whitePins = pinTemp - redPins;
               System.out.println(whitePins + " whites");
            }
         }
      }
   }// end of play 
   public static void gameOver()
   {
      System.out.println("Game over the guesser wins!");
   }//end of gameOver
}