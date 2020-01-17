/* lcannon
   temp converter
*/ 

import java.util.Scanner;

public class tempconverter
{
   public static void main(String[] args)
   {
   // initializing the scanner
   Scanner reader = new Scanner(System.in);
   System.out.println("How hot or cold is it Fahrenheit");
   // turning the user input into an integer
   double answer = reader.nextDouble();
   // the formula for coverting from fahrenheit to celsius
   double cel = (((answer - 32)*5)/9);
   // converting double to int and rounding to 100th
   double rounded = (int)((cel * 100)+.5);
   rounded = rounded/100;
   System.out.println("That is " + rounded + " degrees Celsius");
   
   }


}