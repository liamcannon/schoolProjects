// lcannon  

import java.util.Scanner;

public class strings
{
   public static void main(String[] args)
   {
   
   Scanner scan = new Scanner(System.in);
   
   String word = "Halloween";
   
   System.out.println(word.length());
   
   System.out.println(word.indexOf("we"));
   
   System.out.println(word.charAt(0));
   
   System.out.println(word.charAt(word.length()-1));
  
   // this loop starts at index 0 and the first line prints the entire word
   // when x=1, it stats at index 1 and prints to the end of the word
   // when x = 2, it stats at index 2 and prints to the end of the word
   // and so on...
   for(int x = 0; x<word.length(); x++)
   {
      System.out.println(word.substring(x));
   }
   
   System.out.println("Start of next loop");
   
   for(int x = 0; x <word.length(); x++)
   {
      System.out.println(word.substring(0, x+1));
   }
  
   System.out.println("Start of next loop");
  
   for (int x = 0; x< word.length(); x++)
   {
      System.out.println(word.substring(x, x+1));
   }
   
   System.out.println("Enter two words on different lines");
   
   String word1 = scan.nextLine();
   String word2 = scan.nextLine();
   
   if(word1.compareTo(word2) > 0)
   {
      System.out.println(word1 + " " + word2);
   }
   else if (word1.compareTo(word2)>0)
   {
      System.out.println(word2 + " " + word1);
   }
   else 
   {
      System.out.println("The words are the same");
   }
  
  }
}