// lcannon

import java.util.Scanner;

public class Numbersimplify
{
   public static void main(String[] args)
   {
      Scanner reader = new Scanner(System.in);
      System.out.println("Enter Number");
      
      int number = reader.nextInt();
      
      int Third = number/1000; 
      int leftover = number - 1000*Third;
      
      int Second = leftover/100;
      leftover = leftover-100*Second;
      
      int First = leftover/10;
      leftover = leftover-10*First;
      
      System.out.println("Thousands: "+Third);
      System.out.println("Hundreds: "+Second);
      System.out.println("Tens: "+First);
      System.out.println("Leftover: " + leftover);
   }

}