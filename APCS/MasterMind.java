//lcannon
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Random;
public class MasterMind
{
   public static void main(String[] args)
   {
      Scanner input = new Scanner(System.in);
      System.out.println("Welcome to Mastermind");
      System.out.println("This current version of the game only has player vs. player available so grab a partner");
      
   }// end of main method 
   public String playerOne(String gameAnswer)
   {
      boolean gameStatus;
      Scanner input = new Scanner(System.in);
      char b;
      char r;
      char g; 
      char y; 
      char o;
      char w; 
      
      ArrayList<String> posList = new ArrayList<String>(4);
      
      String pos1; 
      String pos2;
      String pos3;
      String pos4;
      
      do
         {
            System.out.println("Pick the first color");
            pos1 = input.nextLine();
         }
         while(!("brgyow".contains(pos1)));
            posList.add(pos1);
      do
         {
            System.out.println("Pick the second color");
            pos2 = input.nextLine();
         }
         while(!("brgyow".contains(pos2)));
            posList.add(pos2);
     do
         {
            System.out.println("Pick the third color");
            pos3 = input.nextLine();
         }
         while(!("brgyow".contains(pos3)));
            posList.add(pos3);
     do
         {
            System.out.println("Pick the fourth color");
            pos4 = input.nextLine();
         }
         while(!("brgyow".contains(pos4)));
            posList.add(pos4);
            
     ArrayList<String> guessList = new ArrayList<String>(4);
     String guess1;
     String guess2;
     String guess3;
     String guess4;
     for(int x = 0; x < 12; x++)
     {
      do
         {
            System.out.println("Enter your first guess");
            guess1 = input.nextLine();
         }
            while(guess1.contains("bgrwoy"));
            guessList.add(guess1);
      do
         {
            System.out.println("Enter your second guess");
            guess2 = input.nextLine();
         }  
            while(guess2.contains("bgrwoy"));
            guessList.add(guess2);
      do
         {
            System.out.println("Enter your third guess");
            guess3 = input.nextLine();
         }
            while(guess3.contains("brgyow"));
            guessList.add(guess3);
      do
         {
            System.out.println("Enter your fourth guess");
            guess4 = input.nextLine();
         }
            while(guess4.contains("brgyow"));
            guessList.add(guess4);
         }     
      
      int pin = 0;
      for(int x = 0; x < 4; x++)
      {
         if(posList.get(x).equals(guessList.get(x)))
         {
            pin++;
            
            if(pin == 4)
            {
               System.out.println("Correct Answer!");
            }
         }
      }
            
         }//end of playMethod
   
}//end of class