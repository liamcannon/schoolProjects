// lcannon
// 9/18/18

import java.util.Scanner;

public class Digitnum
{
   public static void main(String[] args)
   {
   Scanner reader = new Scanner(System.in);
   
   int count = 0;
   System.out.println("Enter your number: ");
   int num =  reader.nextInt();
   
     
   for(; num!= 0; num/=10, count++){
   }
   
   System.out.println("Number of Digits: " + count);
   }

}