// class Hangman
import java.util.Scanner;

public class hangMan
{
   public static void main(String[] args)
   {
   
      Scanner scn = new Scanner(System.in);
      System.out.println("Enter a word you want to use");
      // getting scanner & hangman word
      String word = scn.nextLine();
      word = word.toLowerCase();
      // setting the world to lowercase so it uppercase letters don't breka the program
      int strikes = 0;
      String answer = "";
      // making string answer and the strikes integer
      for(int x = 0; x < word.length(); x++)// loop that continues as long as x is less than the legth of the hangman word
      {
         answer = answer + "*";// just putting stars for the letters to "hide" them
      }
      
      while(answer.equals(word) == false && strikes < 6)// while loop while string answer is equal to the string word = false and strikes is less than 6
      {
         System.out.println(answer);
         String guess = scn.nextLine();
         if(guess.length() > 1)// if the length of the guess is less than one 
         {
            if(guess.equals(word))// just making it so you can guess the word right away 
            {
               break;
            }
            else// adds a strike assuming the answer is incrrect and adds a strike
            {
               strikes++;
               System.out.println("This ain't it chief, you have " + strikes + " strikes");
            }
         }
         else{
            char letterGuess = guess.charAt(0); // setting the charaecter letter guess equal to the first letter in guess
            int index = word.indexOf(letterGuess); // finding the index of letterGuess 
         
            if(index == -1)// if index is -1 adds strike
            {
               strikes++;
               if(strikes < 6)// loops as long as strikes is less than 6
               {
                 System.out.println("Good try, guess again"); 
               }
               System.out.println("You have " + strikes + " strikes");
            }
           else
          {
             String output = "";

            for(int i = 0; i < word.length(); i++)// loop for i less than length of word runs the if else loops
            {
            
             if(word.charAt(i) == letterGuess){
                output = output + letterGuess;
             }
             else{  
                output = output + answer.charAt(i);                
             }
            
            }
           answer = output;
          }
          
         }
         
      }
      
      if(strikes == 6)// just closing the game is strikes = 6
      {
         System.out.println("The word was " + word);
         System.out.println("You lost");
      } 
      else// if you didn't loose than its assumed you win
      {
         System.out.println("You win");
      }  
   }
}