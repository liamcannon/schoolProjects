//lcannon


import java.util.Scanner;
public class yesNo
{
   public static void main(String[] args)
   {
   Scanner scanner = new Scanner(System.in);
   
   System.out.println("Enter Integer for yes or no lmao");
   int num = scanner.nextInt();
   
      if(num>= 90)
      {
      System.out.println("A");
      }
      else if(num <=89 && num>=80)
      {
      System.out.println("B");
      }
      else if(num<=79 && num>=70)
      {
      System.out.println("C");
      }
      else if(num<=69 && num>=60)
      {
      System.out.println("D");
      }
      else if(num<=59)
      {
      System.out.println("You fekin failed boy");
      }
   }
}
